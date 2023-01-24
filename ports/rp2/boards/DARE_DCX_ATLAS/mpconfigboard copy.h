// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "Kolibri-R1"
#define MICROPY_HW_FLASH_STORAGE_BYTES          (15 * 1024 * 1024) 

// I2C0 config
#define MICROPY_HW_I2C0_SCL                     (9)
#define MICROPY_HW_I2C0_SDA                     (8)

// SPI1 config
#define MICROPY_HW_SPI0_SCK  (2)
#define MICROPY_HW_SPI0_MOSI (3)
#define MICROPY_HW_SPI0_MISO (0)