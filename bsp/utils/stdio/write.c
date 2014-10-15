volatile void *volatile stdio_base;
int (*ptr_put)(void volatile*, char);


#if ( defined(__ICCARM__))

#include <yfuns.h>

_STD_BEGIN

#pragma module_name = "?__write"

/*! \brief Writes a number of bytes, at most \a size, from the memory area
 *         pointed to by \a buffer.
 *
 * If \a buffer is zero then \ref __write performs flushing of internal buffers,
 * if any. In this case, \a handle can be \c -1 to indicate that all handles
 * should be flushed.
 *
 * \param handle File handle to write to.
 * \param buffer Pointer to buffer to read bytes to write from.
 * \param size Number of bytes to write.
 *
 * \return The number of bytes written, or \c _LLIO_ERROR on failure.
 */
size_t __write(int handle, const unsigned char *buffer, size_t size)
{
	size_t nChars = 0;

	if (buffer == 0) {
		// This means that we should flush internal buffers.
		return 0;
	}

	// This implementation only writes to stdout and stderr.
	// For all other file handles, it returns failure.
	if (handle != _LLIO_STDOUT && handle != _LLIO_STDERR) {
		return _LLIO_ERROR;
	}

	for (; size != 0; --size) {
		if (ptr_put(stdio_base, *buffer++) < 0) {
			return _LLIO_ERROR;
		}
		++nChars;
	}
	return nChars;
}

_STD_END


#elif (defined(__GNUC__))

int __attribute__((weak))
_write (int file, char * ptr, int len);

int __attribute__((weak))
_write (int file, char * ptr, int len)
{
	int nChars = 0;

	if ((file != 1) && (file != 2) && (file!=3)) {
		return -1;
	}

	for (; len != 0; --len) {
		if (ptr_put(stdio_base, *ptr++) < 0) {
			return -1;
		}
		++nChars;
	}
	return nChars;
}

#endif

/**
 * \}
 */

