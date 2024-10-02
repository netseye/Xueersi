#ifndef _CONFIG_H_
#define _CONFIG_H_

// Screen
#define TFT_LED_PIN         -1
#define TFT_DC_PIN          4
#define TFT_CS_PIN          5
#define TFT_MOSI_PIN        23
#define TFT_CLK_PIN         18
#define TFT_RST_PIN         -1
#define TFT_MISO_PIN        19

// SD card
#define TFCARD_CS_PIN       22

// Buttons
#define BTN_A               34
#define BTN_B               12
#define BTN_C               2
#define BTN_UP              2
#define BTN_DOWN            13
#define BTN_LEFT            27
#define BTN_RIGHT           35
#define BUTTON_A            34
#define BUTTON_B            12
#define BUTTON_C            2
#define BUTTON_UP           2
#define BUTTON_DOWN         13
#define BUTTON_LEFT         27
#define BUTTON_RIGHT        35
#define BUTTON_A_PIN        34
#define BUTTON_B_PIN        12
#define BUTTON_C_PIN        2
#define BUTTON_UP_PIN       2
#define BUTTON_DOWN_PIN     13
#define BUTTON_LEFT_PIN     27
#define BUTTON_RIGHT_PIN    35

// BEEP PIN
#define SPEAKER_PIN         14
#define TONE_PIN_CHANNEL    0

// LORA
#define LORA_CS_PIN         5
#define LORA_RST_PIN        26
#define LORA_IRQ_PIN        36

// UART
#define USE_SERIAL Serial

#endif /* SETTINGS_C */
