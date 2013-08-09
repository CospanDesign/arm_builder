#include "cyu3system.h"
#include "cyu3os.h"
#include "cyu3dma.h"
#include "cyu3error.h"
#include "cyfxbulklpautoenum.h"
#include "cyu3usb.h"
#include "cyu3uart.h"

#include "debug_controller.h"


/* This function initializes the debug module. The debug prints
 * are routed to the UART and can be seen using a UART console
 * running at 115200 baud rate. */
void debug_init (void){
    CyU3PUartConfig_t uartConfig;
    CyU3PReturnStatus_t retvalue = CY_U3P_SUCCESS;

    /* Initialize the UART for printing debug messages */
    retvalue = CyU3PUartInit();
    if (retvalue != CY_U3P_SUCCESS){
        /* Error handling */
        CyFxAppErrorHandler(retvalue);
    }

    /* Set UART configuration */
    CyU3PMemSet ((uint8_t *)&uartConfig, 0, sizeof (uartConfig));
    uartConfig.baudRate = CY_U3P_UART_BAUDRATE_115200;
    uartConfig.stopBit  = CY_U3P_UART_ONE_STOP_BIT;
    uartConfig.parity   = CY_U3P_UART_NO_PARITY;
    uartConfig.txEnable = CyTrue;
    uartConfig.rxEnable = CyFalse;
    uartConfig.flowCtrl = CyFalse;
    uartConfig.isDma    = CyTrue;

    retvalue = CyU3PUartSetConfig (&uartConfig, NULL);
    if (retvalue != CY_U3P_SUCCESS){
        CyFxAppErrorHandler(retvalue);
    }

    /* Set the UART transfer to a really large value. */
    retvalue = CyU3PUartTxSetBlockXfer (0xFFFFFFFF);
    if (retvalue != CY_U3P_SUCCESS) {
        CyFxAppErrorHandler(retvalue);
    }

    /* Initialize the debug module. */
    retvalue = CyU3PDebugInit (CY_U3P_LPP_SOCKET_UART_CONS, 8);
    if (retvalue != CY_U3P_SUCCESS) {
        CyFxAppErrorHandler(retvalue);
    }
}
