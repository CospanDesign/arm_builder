import os
import utils

debug = False

AddOption("--build_debug",
          dest='build_debug',
          action="store_true",
          help='view messages for debugging the build',
          default=False)
AddOption("--clean_build",
          dest="clean_build",
          action="store_true",
          help="Clean the build environment",
          default=False)
AddOption("--config_file",
          type="string",
          dest='config_file',
          action="store",
          help="specify a config file",
          default='config.json')

#Create an environment
env = Environment()

#parse options from the command line
debug = GetOption('build_debug')
clean_build = GetOption('clean_build')

env['CONFIG_FILE'] = GetOption('config_file')
env.Replace(CC = utils.get_c_compiler_path(env))
env.Replace(CXX = utils.get_cxx_compiler_path(env))
env.Replace(CCVERSION = utils.get_compiler_version(env))
env.Replace(CXXVERSION = utils.get_compiler_version(env))
env.Replace(CXXFILESUFFIX = "cpp")
env.Append(CPPPATH = utils.get_include_paths(env))
#env.AppendENVPath('PATH', utils.get_paths(env))

#env.Append(CPPDEFINES ="")


#All Flags
env.Append(CCFLAGS="-mcpu=cortex-m0plus")
env.Append(CCFLAGS="-mthumb")
env.Append(CCFLAGS="-D__SAMD20G18__")
env.Append(CCFLAGS="-Wall")
env.Append(CCFLAGS="-std=c99")

#C Specific flags

#C++ Specific flags
#env.Append(CPPFLAGS="-Wno-write-strings")

#Assembly Language Specific Flags

env.Append(ASFLAGS = " -d")
#env.Append(ASPPFLAGS = "??")


#Linker Flags

env.Append(LIBPATH = utils.get_library_paths(env))

env.Append(LIBS = utils.get_libraries(env))

env.Append(LINKFLAGS="-T%s" % utils.get_linker_script(env))
#env.Append(LINKFLAGS="--entry=Reset_Handler")
#env.Append(LINKFLAGS="-mthumb")


env.Replace(LIBPREFIXES = "")
#env["LIBSUFFIX"] = ""

if debug == True:
  d = env.Dictionary()
  keys = d.keys()
  keys.sort()
  #print "Compiler Path: %s" % d["CC"]
  for key in keys:
    print "\t%s: %s" % (key, str(d[key]))
  #print "Building: %s" % str(utils.get_c_sources(env))
  #print "Building: %s" % str(utils.get_cpp_sources(env))
  #print "C Command: %s" % env.subst("$CCCOM")
  #print "CXX Command %s" % env.subst("$CXXCOM")
  #print "Version: %s" % env.subst("$CCVERSION")

#cpp_objs = env.Program(utils.get_cpp_sources(env))
#c_objs = env.Program(utils.get_c_sources(env))


#objs = c_objs.extend(cpp_objs)
#env.Tool('elf2img')
#env.Tool('upload')
#env.Tool('vendor_reset')

#env.Alias('upload', 'upload_img')
#env.Alias('vendor_reset', 'vendor_reset_img')

elf_files = env.Program(target=utils.get_elf_target(env), source=utils.get_all_sources(env))
#imgfile = env.elf2img(target=utils.get_project_output_target(env), source=elf_files)

#env.vendor_reset(target="vendor_reset_img")
#env.upload(target="upload_img", source=imgfile)

Default(elf_files)

