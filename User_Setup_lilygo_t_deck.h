// TFT_eSPI User Setup for LilyGo T-Deck (ESP32-S3)
// Display: 2.8" 320x240 ILI9341, SPI

#define ILI9341_DRIVER

#define CGRAM_OFFSET

// For ST7789 and ILI9341 ONLY, define the colour order IF the blue and red are swapped on your display
#define TFT_RGB_ORDER TFT_RGB  // Colour order Red-Green-Blue

// ILI9341 native portrait resolution (240 wide, 320 tall)
// We use setRotation(1) for landscape (320 wide, 240 tall)
// TFT_WIDTH and TFT_HEIGHT are NOT required for ILI9341 as they default to 240 x 320

// LilyGo T-Deck SPI pin definitions
#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   15  // Chip select
#define TFT_DC   2  // Data/Command
#define TFT_RST  -1  // Reset (connected to EN pin via hardware)
#define TFT_BL   21  // Backlight

#define TOUCH_CS -1  // No touch screen CS

#define TFT_BACKLIGHT_ON HIGH

// Fonts
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

// SPI frequency
#define SPI_FREQUENCY  40000000
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY  2500000
