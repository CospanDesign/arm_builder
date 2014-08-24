#ifndef __USER_BOARD__
#define __USER_BOARD__

#include <conf_board.h>
#include <compiler.h>

#ifdef __cplusplus
extern "C" {
#endif

void system_board_init(void);

/** Name string macro */
#define BOARD_NAME                "ANNA_LOGGER_REV_A"

//Clocks
#define BOARD_FREQ_SLCK_XTAL      0 /* Not Mounted */
#define BOARD_FREQ_SLCK_BYPASS    0 /* Not Mounted */
#define BOARD_FREQ_MAINCK_XTAL    0 /* Not Mounted */
#define BOARD_FREQ_MAINCK_BYPASS  0 /* Not Mounted */
#define BOARD_MCK                 CHIP_FREQ_CPU_MAX
#define BOARD_OSC_STARTUP_US      15625



//LEDs


//name LED0 definitions
#define LED0_PIN                  PIN_PA12
#define LED0_ACTIVE               false
#define LED0_INACTIVE             !LED0_ACTIVE

//name LED1 definitions
#define LED1_PIN                  PIN_PA27
#define LED1_ACTIVE               false
#define LED1_INACTIVE             !LED1_ACTIVE

//name LED2 definitions
#define LED2_PIN                  PIN_PA13
#define LED2_ACTIVE               false
#define LED2_INACTIVE             !LED2_ACTIVE



//name LED #0 definitions
#define LED_0_NAME                "LED0 (green)"
#define LED_0_PIN                 LED0_PIN
#define LED_0_ACTIVE              LED0_ACTIVE
#define LED_0_INACTIVE            LED0_INACTIVE
#define LED0_GPIO 				        LED0_PIN

//name LED #0 definitions
#define LED_1_NAME                "LED1 (orange)"
#define LED_1_PIN                 LED1_PIN
#define LED_1_ACTIVE              LED1_ACTIVE
#define LED_1_INACTIVE            LED1_INACTIVE
#define LED1_GPIO 				        LED1_PIN

//name LED #0 definitions
#define LED_2_NAME                "LED2 (WIFI)"
#define LED_2_PIN                 LED2_PIN
#define LED_2_ACTIVE              LED2_ACTIVE
#define LED_2_INACTIVE            LED2_INACTIVE
#define LED2_GPIO 				        LED2_PIN

/** Number of on-board LEDs */
#define LED_COUNT                 3



//Buttons


//name SW0 definitions
#define SW0_PIN                   PIN_PB02
#define SW0_ACTIVE                false
#define SW0_INACTIVE              !SW0_ACTIVE
#define SW0_EIC_PIN               PIN_PA15A_EIC_EXTINT15
#define SW0_EIC_MUX               MUX_PA15A_EIC_EXTINT15
#define SW0_EIC_PINMUX            PINMUX_PA15A_EIC_EXTINT15
#define SW0_EIC_LINE              2

//name SW1 definitions
#define SW1_PIN                   PIN_PB03
#define SW1_ACTIVE                false
#define SW1_INACTIVE              !SW1_ACTIVE
#define SW1_EIC_PIN               PIN_PA15A_EIC_EXTINT15
#define SW1_EIC_MUX               MUX_PA15A_EIC_EXTINT15
#define SW1_EIC_PINMUX            PINMUX_PA15A_EIC_EXTINT15
#define SW1_EIC_LINE              2



//name Button #0 definitions
#define BUTTON_0_NAME             "Button0"
#define BUTTON_0_PIN              SW0_PIN
#define BUTTON_0_ACTIVE           SW0_ACTIVE
#define BUTTON_0_INACTIVE         SW0_INACTIVE
#define BUTTON_0_EIC_PIN          SW0_EIC_PIN
#define BUTTON_0_EIC_MUX          SW0_EIC_MUX
#define BUTTON_0_EIC_PINMUX       SW0_EIC_PINMUX
#define BUTTON_0_EIC_LINE         SW0_EIC_LINE


//name Button #0 definitions
#define BUTTON_1_NAME             "Button1"
#define BUTTON_1_PIN              SW1_PIN
#define BUTTON_1_ACTIVE           SW1_ACTIVE
#define BUTTON_1_INACTIVE         SW1_INACTIVE
#define BUTTON_1_EIC_PIN          SW1_EIC_PIN
#define BUTTON_1_EIC_MUX          SW1_EIC_MUX
#define BUTTON_1_EIC_PINMUX       SW1_EIC_PINMUX
#define BUTTON_1_EIC_LINE         SW1_EIC_LINE



/** Number of on-board buttons */
#define BUTTON_COUNT 2


//FTDI UART Interface
#define FTDI_HOST_UART_RXD        PIN_PB22
#define FTDI_HOST_UART_TXD        PIN_PB23

//SD Card Defines
#define SD_SPI_SCK                PIN_PA09
#define SD_SPI_CS_N               PIN_PA10
#define SD_SPI_MISO               PIN_PA11
#define SD_SPI_MOSI               PIN_PA08

#define SD_CARD_DETECT_N          PIN_PA20

//SD Card Notes:
#define SD_CARD_DETECT_N_EIC      4

//EEPROM Defines
#define EEPROM_SPI_MOSI           PIN_PB08
#define EEPROM_SPI_SCK            PIN_PB09
#define EEPROM_SPI_CS_N           PIN_PB10
#define EEPROM_SPI_MISO           PIN_PB11

//WIFI Defines
#define WIFI_MOSI                 PIN_PA22
#define WIFI_SCK                  PIN_PA23
#define WIFI_CS_N                 PIN_PA24
#define WIFI_MISO                 PIN_PA24

#define WIFI_IRQ_N                PIN_PA21

//WIFI Notes:
#define WIFI_IRQ_N_EIC            5

//Expansion Card Defines
#define CARD_A0                   PIN_PA02
#define CARD_A1                   PIN_PA03
#define CARD_A2                   PIN_PA04
#define CARD_A3                   PIN_PA05
#define CARD_A4                   PIN_PA06

#define CARD_SCK                  PIN_PA17
#define CARD_CS_N                 PIN_PA18
#define CARD_MISO                 PIN_PA19
#define CARD_MOSI                 PIN_PA16











//name Extension header #1 pin definitions
#define EXT1_PIN_3                PIN_PB00
#define EXT1_PIN_4                PIN_PB01
#define EXT1_PIN_5                PIN_PB06
#define EXT1_PIN_6                PIN_PB07
#define EXT1_PIN_7                PIN_PB02
#define EXT1_PIN_8                PIN_PB03
#define EXT1_PIN_9                PIN_PB04
#define EXT1_PIN_10               PIN_PB05
#define EXT1_PIN_11               PIN_PA08
#define EXT1_PIN_12               PIN_PA09
#define EXT1_PIN_13               PIN_PB09
#define EXT1_PIN_14               PIN_PB08
#define EXT1_PIN_15               PIN_PA05
#define EXT1_PIN_16               PIN_PA06
#define EXT1_PIN_17               PIN_PA04
#define EXT1_PIN_18               PIN_PA07

//name Extension header #1 pin definitions by function
#define EXT1_PIN_ADC_0            EXT1_PIN_3
#define EXT1_PIN_ADC_1            EXT1_PIN_4
#define EXT1_PIN_GPIO_0           EXT1_PIN_5
#define EXT1_PIN_GPIO_1           EXT1_PIN_6
#define EXT1_PIN_PWM_0            EXT1_PIN_7
#define EXT1_PIN_PWM_1            EXT1_PIN_8
#define EXT1_PIN_IRQ              EXT1_PIN_9
#define EXT1_PIN_I2C_SDA          EXT1_PIN_11
#define EXT1_PIN_I2C_SCL          EXT1_PIN_12
#define EXT1_PIN_UART_RX          EXT1_PIN_13
#define EXT1_PIN_UART_TX          EXT1_PIN_14
#define EXT1_PIN_SPI_SS_1         EXT1_PIN_10
#define EXT1_PIN_SPI_SS_0         EXT1_PIN_15
#define EXT1_PIN_SPI_MOSI         EXT1_PIN_16
#define EXT1_PIN_SPI_MISO         EXT1_PIN_17
#define EXT1_PIN_SPI_SCK          EXT1_PIN_18

//name Extension header #1 ADC definitions
#define EXT1_ADC_MODULE           ADC
#define EXT1_ADC_0_CHANNEL        8
#define EXT1_ADC_0_PIN            PIN_PB00B_ADC_AIN8
#define EXT1_ADC_0_MUX            MUX_PB00B_ADC_AIN8
#define EXT1_ADC_0_PINMUX         PINMUX_PB00B_ADC_AIN8
#define EXT1_ADC_1_CHANNEL        9
#define EXT1_ADC_1_PIN            PIN_PB01B_ADC_AIN9
#define EXT1_ADC_1_MUX            MUX_PB01B_ADC_AIN9
#define EXT1_ADC_1_PINMUX         PINMUX_PB01B_ADC_AIN9

//name Extension header #1 PWM definitions
#define EXT1_PWM_MODULE           TC6
#define EXT1_PWM_0_CHANNEL        0
#define EXT1_PWM_0_PIN            PIN_PB02F_TC6_WO0
#define EXT1_PWM_0_MUX            MUX_PB02F_TC6_WO0
#define EXT1_PWM_0_PINMUX         PINMUX_PB02F_TC6_WO0
#define EXT1_PWM_1_CHANNEL        1
#define EXT1_PWM_1_PIN            PIN_PB03F_TC6_WO1
#define EXT1_PWM_1_MUX            MUX_PB03F_TC6_WO1
#define EXT1_PWM_1_PINMUX         PINMUX_PB03F_TC6_WO1

//name Extension header #1 IRQ/External interrupt definitions
#define EXT1_IRQ_MODULE           EIC
#define EXT1_IRQ_INPUT            4
#define EXT1_IRQ_PIN              PIN_PB04A_EIC_EXTINT4
#define EXT1_IRQ_MUX              MUX_PB04A_EIC_EXTINT4
#define EXT1_IRQ_PINMUX           PINMUX_PB04A_EIC_EXTINT4

//name Extension header #1 I2C definitions
#define EXT1_I2C_MODULE              SERCOM2
#define EXT1_I2C_SERCOM_PINMUX_PAD0  PINMUX_PA08D_SERCOM2_PAD0
#define EXT1_I2C_SERCOM_PINMUX_PAD1  PINMUX_PA09D_SERCOM2_PAD1

//name Extension header #1 UART definitions
#define EXT1_UART_MODULE              SERCOM4
#define EXT1_UART_SERCOM_MUX_SETTING  USART_RX_1_TX_0_XCK_1
#define EXT1_UART_SERCOM_PINMUX_PAD0  PINMUX_PB08D_SERCOM4_PAD0
#define EXT1_UART_SERCOM_PINMUX_PAD1  PINMUX_PB09D_SERCOM4_PAD1
#define EXT1_UART_SERCOM_PINMUX_PAD2  PINMUX_UNUSED
#define EXT1_UART_SERCOM_PINMUX_PAD3  PINMUX_UNUSED

//name Extension header #1 SPI definitions
#define EXT1_SPI_MODULE              SERCOM0
#define EXT1_SPI_SERCOM_MUX_SETTING  SPI_SIGNAL_MUX_SETTING_E
#define EXT1_SPI_SERCOM_PINMUX_PAD0  PINMUX_PA04D_SERCOM0_PAD0
#define EXT1_SPI_SERCOM_PINMUX_PAD1  PINMUX_PA05D_SERCOM0_PAD1
#define EXT1_SPI_SERCOM_PINMUX_PAD2  PINMUX_PA06D_SERCOM0_PAD2
#define EXT1_SPI_SERCOM_PINMUX_PAD3  PINMUX_PA07D_SERCOM0_PAD3








//name Extension header #2 pin definitions
#define EXT2_PIN_3                PIN_PA10
#define EXT2_PIN_4                PIN_PA11
#define EXT2_PIN_5                PIN_PA20
#define EXT2_PIN_6                PIN_PA21
#define EXT2_PIN_7                PIN_PA22
#define EXT2_PIN_8                PIN_PA23
#define EXT2_PIN_9                PIN_PB14
#define EXT2_PIN_10               PIN_PB15
#define EXT2_PIN_11               PIN_PA08
#define EXT2_PIN_12               PIN_PA09
#define EXT2_PIN_13               PIN_PB13
#define EXT2_PIN_14               PIN_PB12
#define EXT2_PIN_15               PIN_PA17
#define EXT2_PIN_16               PIN_PA18
#define EXT2_PIN_17               PIN_PA16
#define EXT2_PIN_18               PIN_PA19

//name Extension header #2 pin definitions by function
#define EXT2_PIN_ADC_0            EXT2_PIN_3
#define EXT2_PIN_ADC_1            EXT2_PIN_4
#define EXT2_PIN_GPIO_0           EXT2_PIN_5
#define EXT2_PIN_GPIO_1           EXT2_PIN_6
#define EXT2_PIN_PWM_0            EXT2_PIN_7
#define EXT2_PIN_PWM_1            EXT2_PIN_8
#define EXT2_PIN_IRQ              EXT2_PIN_9
#define EXT2_PIN_I2C_SDA          EXT2_PIN_11
#define EXT2_PIN_I2C_SCL          EXT2_PIN_12
#define EXT2_PIN_UART_RX          EXT2_PIN_13
#define EXT2_PIN_UART_TX          EXT2_PIN_14
#define EXT2_PIN_SPI_SS_1         EXT2_PIN_10
#define EXT2_PIN_SPI_SS_0         EXT2_PIN_15
#define EXT2_PIN_SPI_MOSI         EXT2_PIN_16
#define EXT2_PIN_SPI_MISO         EXT2_PIN_17
#define EXT2_PIN_SPI_SCK          EXT2_PIN_18

//name Extension header #2 ADC definitions
#define EXT2_ADC_MODULE           ADC
#define EXT2_ADC_0_CHANNEL        18
#define EXT2_ADC_0_PIN            PIN_PA10B_ADC_AIN18
#define EXT2_ADC_0_MUX            MUX_PA10B_ADC_AIN18
#define EXT2_ADC_0_PINMUX         PINMUX_PA10B_ADC_AIN18
#define EXT2_ADC_1_CHANNEL        19
#define EXT2_ADC_1_PIN            PIN_PA11B_ADC_AIN19
#define EXT2_ADC_1_MUX            MUX_PA11B_ADC_AIN19
#define EXT2_ADC_1_PINMUX         PINMUX_PA11B_ADC_AIN19

//name Extension header #2 PWM definitions
#define EXT2_PWM_MODULE           TC4
#define EXT2_PWM_0_CHANNEL        0
#define EXT2_PWM_0_PIN            PIN_PA22F_TC4_WO0
#define EXT2_PWM_0_MUX            MUX_PA22F_TC4_WO0
#define EXT2_PWM_0_PINMUX         PINMUX_PA22F_TC4_WO0
#define EXT2_PWM_1_CHANNEL        1
#define EXT2_PWM_1_PIN            PIN_PA23F_TC4_WO1
#define EXT2_PWM_1_MUX            MUX_PA23F_TC4_WO1
#define EXT2_PWM_1_PINMUX         PINMUX_PA23F_TC4_WO1

//name Extension header #2 IRQ/External interrupt definitions
#define EXT2_IRQ_MODULE           EIC
#define EXT2_IRQ_INPUT            14
#define EXT2_IRQ_PIN              PIN_PB14A_EIC_EXTINT14
#define EXT2_IRQ_MUX              MUX_PB14A_EIC_EXTINT14
#define EXT2_IRQ_PINMUX           PINMUX_PB14A_EIC_EXTINT14

 //name Extension header #2 I2C definitions
#define EXT2_I2C_MODULE              SERCOM2
#define EXT2_I2C_SERCOM_PINMUX_PAD0  PINMUX_PA08D_SERCOM2_PAD0
#define EXT2_I2C_SERCOM_PINMUX_PAD1  PINMUX_PA09D_SERCOM2_PAD1

//name Extension header #2 UART definitions
#define EXT2_UART_MODULE              SERCOM4
#define EXT2_UART_SERCOM_MUX_SETTING  USART_RX_1_TX_0_XCK_1
#define EXT2_UART_SERCOM_PINMUX_PAD0  PINMUX_PB12C_SERCOM4_PAD0
#define EXT2_UART_SERCOM_PINMUX_PAD1  PINMUX_PB13C_SERCOM4_PAD1
#define EXT2_UART_SERCOM_PINMUX_PAD2  PINMUX_UNUSED
#define EXT2_UART_SERCOM_PINMUX_PAD3  PINMUX_UNUSED

//name Extension header #2 SPI definitions
#define EXT2_SPI_MODULE              SERCOM1
#define EXT2_SPI_SERCOM_MUX_SETTING  SPI_SIGNAL_MUX_SETTING_E
#define EXT2_SPI_SERCOM_PINMUX_PAD0  PINMUX_PA16C_SERCOM1_PAD0
#define EXT2_SPI_SERCOM_PINMUX_PAD1  PINMUX_PA17C_SERCOM1_PAD1
#define EXT2_SPI_SERCOM_PINMUX_PAD2  PINMUX_PA18C_SERCOM1_PAD2
#define EXT2_SPI_SERCOM_PINMUX_PAD3  PINMUX_PA19C_SERCOM1_PAD3




//name Extension header #3 pin definitions
#define EXT3_PIN_3                PIN_PA02
#define EXT3_PIN_4                PIN_PA03
#define EXT3_PIN_5                PIN_PB30
#define EXT3_PIN_6                PIN_PA15
#define EXT3_PIN_7                PIN_PA12
#define EXT3_PIN_8                PIN_PA13
#define EXT3_PIN_9                PIN_PA28
#define EXT3_PIN_10               PIN_PA27
#define EXT3_PIN_11               PIN_PA08
#define EXT3_PIN_12               PIN_PA09
#define EXT3_PIN_13               PIN_PB11
#define EXT3_PIN_14               PIN_PB10
#define EXT3_PIN_15               PIN_PB17
#define EXT3_PIN_16               PIN_PB22
#define EXT3_PIN_17               PIN_PB16
#define EXT3_PIN_18               PIN_PB23

//name Extension header #3 pin definitions by function
#define EXT3_PIN_ADC_0            EXT3_PIN_3
#define EXT3_PIN_ADC_1            EXT3_PIN_4
#define EXT3_PIN_GPIO_0           EXT3_PIN_5
#define EXT3_PIN_GPIO_1           EXT3_PIN_6
#define EXT3_PIN_PWM_0            EXT3_PIN_7
#define EXT3_PIN_PWM_1            EXT3_PIN_8
#define EXT3_PIN_IRQ              EXT3_PIN_9
#define EXT3_PIN_I2C_SDA          EXT3_PIN_11
#define EXT3_PIN_I2C_SCL          EXT3_PIN_12
#define EXT3_PIN_UART_RX          EXT3_PIN_13
#define EXT3_PIN_UART_TX          EXT3_PIN_14
#define EXT3_PIN_SPI_SS_1         EXT3_PIN_10
#define EXT3_PIN_SPI_SS_0         EXT3_PIN_15
#define EXT3_PIN_SPI_MOSI         EXT3_PIN_16
#define EXT3_PIN_SPI_MISO         EXT3_PIN_17
#define EXT3_PIN_SPI_SCK          EXT3_PIN_18

//name Extension header #3 ADC definitions
#define EXT3_ADC_MODULE           ADC
#define EXT3_ADC_0_CHANNEL        0
#define EXT3_ADC_0_PIN            PIN_PA02B_ADC_AIN0
#define EXT3_ADC_0_MUX            MUX_PA02B_ADC_AIN0
#define EXT3_ADC_0_PINMUX         PINMUX_PA02B_ADC_AIN0
#define EXT3_ADC_1_CHANNEL        1
#define EXT3_ADC_1_PIN            PIN_PA03B_ADC_AIN1
#define EXT3_ADC_1_MUX            MUX_PA03B_ADC_AIN1
#define EXT3_ADC_1_PINMUX         PINMUX_PA03B_ADC_AIN1

//name Extension header #3 PWM definitions
#define EXT3_PWM_MODULE           TC2
#define EXT3_PWM_0_CHANNEL        0
#define EXT3_PWM_0_PIN            PIN_PA12E_TC2_WO0
#define EXT3_PWM_0_MUX            MUX_PA12E_TC2_WO0
#define EXT3_PWM_0_PINMUX         PINMUX_PA12E_TC2_WO0
#define EXT3_PWM_1_CHANNEL        1
#define EXT3_PWM_1_PIN            PIN_PA13E_TC2_WO1
#define EXT3_PWM_1_MUX            MUX_PA13E_TC2_WO1
#define EXT3_PWM_1_PINMUX         PINMUX_PA13E_TC2_WO1

//name Extension header #3 IRQ/External interrupt definitions
#define EXT3_IRQ_MODULE           EIC
#define EXT3_IRQ_INPUT            8
#define EXT3_IRQ_PIN              PIN_PA28A_EIC_EXTINT8
#define EXT3_IRQ_MUX              MUX_PA28A_EIC_EXTINT8
#define EXT3_IRQ_PINMUX           PINMUX_PA28A_EIC_EXTINT8

//name Extension header #3 I2C definitions
#define EXT3_I2C_MODULE              SERCOM2
#define EXT3_I2C_SERCOM_PINMUX_PAD0  PINMUX_PA08D_SERCOM2_PAD0
#define EXT3_I2C_SERCOM_PINMUX_PAD1  PINMUX_PA09D_SERCOM2_PAD1

//name Extension header #3 UART definitions
#define EXT3_UART_MODULE              SERCOM4
#define EXT3_UART_SERCOM_MUX_SETTING  USART_RX_3_TX_2_XCK_3
#define EXT3_UART_SERCOM_PINMUX_PAD0  PINMUX_UNUSED
#define EXT3_UART_SERCOM_PINMUX_PAD1  PINMUX_UNUSED
#define EXT3_UART_SERCOM_PINMUX_PAD2  PINMUX_PB10D_SERCOM4_PAD2
#define EXT3_UART_SERCOM_PINMUX_PAD3  PINMUX_PB11D_SERCOM4_PAD3

//name Extension header #3 SPI definitions
#define EXT3_SPI_MODULE              SERCOM5
#define EXT3_SPI_SERCOM_MUX_SETTING  SPI_SIGNAL_MUX_SETTING_E
#define EXT3_SPI_SERCOM_PINMUX_PAD0  PINMUX_PB16C_SERCOM5_PAD0
#define EXT3_SPI_SERCOM_PINMUX_PAD1  PINMUX_PB17C_SERCOM5_PAD1
#define EXT3_SPI_SERCOM_PINMUX_PAD2  PINMUX_PB22D_SERCOM5_PAD2
#define EXT3_SPI_SERCOM_PINMUX_PAD3  PINMUX_PB23D_SERCOM5_PAD3

//name Embedded debugger GPIO interface definitions
#define EDBG_GPIO0_PIN            PIN_PA27
#define EDBG_GPIO1_PIN            PIN_PA28
#define EDBG_GPIO2_PIN            PIN_PA20
#define EDBG_GPIO3_PIN            PIN_PA21

//name Embedded debugger USART interface definitions
#define EDBG_UART_MODULE          -1 /* Not available on this board */
#define EDBG_UART_RX_PIN          -1 /* Not available on this board */
#define EDBG_UART_RX_MUX          -1 /* Not available on this board */
#define EDBG_UART_RX_PINMUX       -1 /* Not available on this board */
#define EDBG_UART_RX_SERCOM_PAD   -1 /* Not available on this board */
#define EDBG_UART_TX_PIN          -1 /* Not available on this board */
#define EDBG_UART_TX_MUX          -1 /* Not available on this board */
#define EDBG_UART_TX_PINMUX       -1 /* Not available on this board */
#define EDBG_UART_TX_SERCOM_PAD   -1 /* Not available on this board */

//name Embedded debugger I2C interface definitions
#define EDBG_I2C_MODULE              SERCOM2
#define EDBG_I2C_SERCOM_PINMUX_PAD0  PINMUX_PA08D_SERCOM2_PAD0
#define EDBG_I2C_SERCOM_PINMUX_PAD1  PINMUX_PA09D_SERCOM2_PAD1

//name Embedded debugger SPI interface definitions
#define EDBG_SPI_MODULE              SERCOM5
#define EDBG_SPI_SERCOM_MUX_SETTING  SPI_SIGNAL_MUX_SETTING_E
#define EDBG_SPI_SERCOM_PINMUX_PAD0  PINMUX_PB16C_SERCOM5_PAD0
#define EDBG_SPI_SERCOM_PINMUX_PAD1  PINMUX_PB31D_SERCOM5_PAD1
#define EDBG_SPI_SERCOM_PINMUX_PAD2  PINMUX_PB22D_SERCOM5_PAD2
#define EDBG_SPI_SERCOM_PINMUX_PAD3  PINMUX_PB23D_SERCOM5_PAD3

//name Embedded debugger CDC Gateway USART interface definitions
#define EDBG_CDC_MODULE              SERCOM3
#define EDBG_CDC_SERCOM_MUX_SETTING  USART_RX_3_TX_2_XCK_3
#define EDBG_CDC_SERCOM_PINMUX_PAD0  PINMUX_UNUSED
#define EDBG_CDC_SERCOM_PINMUX_PAD1  PINMUX_UNUSED
#define EDBG_CDC_SERCOM_PINMUX_PAD2  PINMUX_PA24C_SERCOM3_PAD2
#define EDBG_CDC_SERCOM_PINMUX_PAD3  PINMUX_PA25C_SERCOM3_PAD3





#define AT86RFX_SPI                   EXT1_SPI_MODULE
#define AT86RFX_RST_PIN               EXT1_PIN_7
#define AT86RFX_MISC_PIN              EXT1_PIN_12
#define AT86RFX_IRQ_PIN               EXT1_PIN_9
#define AT86RFX_SLP_PIN               EXT1_PIN_10
#define AT86RFX_SPI_CS                EXT1_PIN_15
#define AT86RFX_SPI_MOSI              EXT1_PIN_16
#define AT86RFX_SPI_MISO              EXT1_PIN_17
#define AT86RFX_SPI_SCK               EXT1_PIN_18
#define AT86RFX_CSD     		          EXT1_PIN_5
#define AT86RFX_CPS 	                EXT1_PIN_8

#define LED0 LED0_PIN
#define LED1 LED1_PIN
#define LED2 LED2_PIN

#define AT86RFX_SPI_CONFIG(config) \
        config.mux_setting = EXT1_SPI_SERCOM_MUX_SETTING; \
        config.mode_specific.master.baudrate = AT86RFX_SPI_BAUDRATE; \
        config.pinmux_pad0 = EXT1_SPI_SERCOM_PINMUX_PAD0; \
        config.pinmux_pad1 = PINMUX_UNUSED; \
        config.pinmux_pad2 = EXT1_SPI_SERCOM_PINMUX_PAD2; \
        config.pinmux_pad3 = EXT1_SPI_SERCOM_PINMUX_PAD3;

#define AT86RFX_IRQ_CHAN             EXT1_IRQ_INPUT
#define AT86RFX_INTC_INIT()    struct extint_chan_conf eint_chan_conf; \
                                                extint_chan_get_config_defaults(&eint_chan_conf); \
                                                eint_chan_conf.gpio_pin = AT86RFX_IRQ_PIN; \
                                                eint_chan_conf.gpio_pin_mux = EXT1_IRQ_PINMUX; \
												eint_chan_conf.gpio_pin_pull      = EXTINT_PULL_NONE; \
                                                eint_chan_conf.wake_if_sleeping    = true; \
                                                eint_chan_conf.filter_input_signal = false; \
                                                eint_chan_conf.detection_criteria  = EXTINT_DETECT_RISING; \
                                                extint_chan_set_config(AT86RFX_IRQ_CHAN, &eint_chan_conf); \
                                                extint_register_callback(AT86RFX_ISR, AT86RFX_IRQ_CHAN, EXTINT_CALLBACK_TYPE_DETECT);
                                                

/** Enables the transceiver main interrupt. */
#define ENABLE_TRX_IRQ()                extint_chan_enable_callback(AT86RFX_IRQ_CHAN, EXTINT_CALLBACK_TYPE_DETECT)

/** Disables the transceiver main interrupt. */
#define DISABLE_TRX_IRQ()               extint_chan_disable_callback(AT86RFX_IRQ_CHAN, EXTINT_CALLBACK_TYPE_DETECT)

/** Clears the transceiver main interrupt. */
#define CLEAR_TRX_IRQ()                 extint_chan_clear_detected(AT86RFX_IRQ_CHAN);

/*
 * This macro saves the trx interrupt status and disables the trx interrupt.
 */
#define ENTER_TRX_REGION()   { extint_chan_disable_callback(AT86RFX_IRQ_CHAN, EXTINT_CALLBACK_TYPE_DETECT)

/*
 *  This macro restores the transceiver interrupt status
 */
#define LEAVE_TRX_REGION()   extint_chan_enable_callback(AT86RFX_IRQ_CHAN, EXTINT_CALLBACK_TYPE_DETECT); }
                                                
/**
 * \brief Turns off the specified LEDs.
 *
 * \param led_gpio LED to turn off (LEDx_GPIO).
 *
 * \note The pins of the specified LEDs are set to GPIO output mode.
 */
#define LED_Off(led_gpio)     port_pin_set_output_level(led_gpio,true)

/**
 * \brief Turns on the specified LEDs.
 *
 * \param led_gpio LED to turn on (LEDx_GPIO).
 *
 * \note The pins of the specified LEDs are set to GPIO output mode.
 */
#define LED_On(led_gpio)      port_pin_set_output_level(led_gpio,false)

/**
 * \brief Toggles the specified LEDs.
 *
 * \param led_gpio LED to toggle (LEDx_GPIO).
 *
 * \note The pins of the specified LEDs are set to GPIO output mode.
 */
#define LED_Toggle(led_gpio)  port_pin_toggle_output_level(led_gpio)

#ifdef __cplusplus
}
#endif



#endif