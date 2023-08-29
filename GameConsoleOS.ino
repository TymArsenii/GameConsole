const uint8_t snake_clear[] PROGMEM = {
    0x00,
};  //1x1 clear dot
const uint8_t snake_dot[] PROGMEM = {
    0x01,
};  //1x1 - dot

const uint8_t snake_logo[] PROGMEM = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0xE0,
    0xF0,
    0xF8,
    0xFC,
    0xFC,
    0x7E,
    0x3F,
    0x3F,
    0x38,
    0x00,
    0x80,
    0xF8,
    0xF8,
    0xF8,
    0xFC,
    0xF8,
    0xC0,
    0x00,
    0x00,
    0xE0,
    0xFC,
    0xFC,
    0xFC,
    0x1C,
    0x00,
    0xC0,
    0xF0,
    0xF8,
    0xFC,
    0x7C,
    0xFE,
    0xFC,
    0xC0,
    0x00,
    0x18,
    0xBC,
    0x3C,
    0xFE,
    0xFE,
    0x80,
    0x80,
    0xC0,
    0xE0,
    0xF8,
    0xFC,
    0xBC,
    0xD8,
    0xE8,
    0x3C,
    0x3E,
    0x1F,
    0x1F,
    0x1E,
    0x18,
    0x08,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x1C,
    0x3F,
    0x3F,
    0x3F,
    0x39,
    0x18,
    0x18,
    0x98,
    0xDC,
    0xFC,
    0xFC,
    0xFC,
    0x7D,
    0x83,
    0xFF,
    0xFF,
    0x03,
    0x07,
    0x1F,
    0x3F,
    0xFC,
    0xFB,
    0x7F,
    0x7F,
    0x1F,
    0xE0,
    0xFE,
    0xFF,
    0xFF,
    0x77,
    0x30,
    0x38,
    0x3F,
    0x7F,
    0xFF,
    0x7F,
    0x6F,
    0x07,
    0x77,
    0xF8,
    0xFF,
    0xFF,
    0x3F,
    0x7F,
    0xFB,
    0xF1,
    0xE0,
    0x03,
    0x0F,
    0xFF,
    0xFC,
    0xFE,
    0xE6,
    0x76,
    0x70,
    0x20,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x1C,
    0x3E,
    0x3E,
    0x9F,
    0x9F,
    0x8F,
    0xCF,
    0xC7,
    0xC7,
    0x61,
    0x63,
    0x63,
    0x61,
    0xE1,
    0xE0,
    0xE0,
    0xC0,
    0x78,
    0x7C,
    0x34,
    0x20,
    0x48,
    0x4B,
    0x07,
    0x07,
    0x1B,
    0x39,
    0x24,
    0x04,
    0x44,
    0x64,
    0xE4,
    0x82,
    0x07,
    0x0D,
    0x31,
    0xC0,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x80,
    0xE0,
    0x78,
    0x3C,
    0x9E,
    0x3B,
    0x3B,
    0xF9,
    0xF9,
    0xBD,
    0xAD,
    0xFE,
    0xF6,
    0x86,
    0x06,
    0x02,
    0x02,
    0x03,
    0x07,
    0x0D,
    0x19,
    0x20,
    0xF1,
    0xD1,
    0xF1,
    0x11,
    0x01,
    0x88,
    0xC0,
    0x64,
    0x36,
    0x1A,
    0x0E,
    0x82,
    0xC2,
    0x62,
    0x33,
    0x99,
    0xCF,
    0x4E,
    0x2B,
    0x33,
    0x1B,
    0x9E,
    0x9E,
    0x8E,
    0x8C,
    0x88,
    0x80,
    0x80,
    0x98,
    0x10,
    0x30,
    0x20,
    0x60,
    0xC0,
    0xC0,
    0x20,
    0x20,
    0x20,
    0x40,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3E,
    0x63,
    0x6D,
    0x4F,
    0xFF,
    0xFF,
    0x77,
    0x76,
    0xF0,
    0xF3,
    0xFB,
    0xFB,
    0x99,
    0x39,
    0x1B,
    0x3B,
    0x35,
    0x5B,
    0xDB,
    0x9B,
    0x7B,
    0x0F,
    0x1F,
    0x06,
    0xC0,
    0x20,
    0x10,
    0x0D,
    0x06,
    0xC3,
    0x61,
    0x30,
    0x98,
    0xCC,
    0xE6,
    0xC3,
    0x01,
    0xF8,
    0x86,
    0x03,
    0x21,
    0x78,
    0xCC,
    0x96,
    0x7B,
    0x67,
    0xDB,
    0xD9,
    0x9D,
    0x9F,
    0xB0,
    0x38,
    0x1F,
    0x1D,
    0x1F,
    0x3C,
    0x30,
    0xB0,
    0x9F,
    0xDE,
    0x9B,
    0x83,
    0xE6,
    0xFC,
    0xE0,
    0x01,
    0x0E,
    0x78,
    0xD0,
    0x00,
    0x38,
    0x7C,
    0x7C,
    0x7E,
    0xFE,
    0xFE,
    0xFC,
    0xFD,
    0xFB,
    0xF6,
    0xEC,
    0xD9,
    0xB3,
    0xB7,
    0x99,
    0x1D,
    0xFE,
    0xFE,
    0x3D,
    0x1E,
    0xC1,
    0xFF,
    0xFF,
    0xFF,
    0xCC,
    0x9B,
    0x20,
    0x40,
    0xC0,
    0x8E,
    0x8F,
    0x88,
    0x1A,
    0x17,
    0x17,
    0x1F,
    0x3F,
    0x2F,
    0x2E,
    0x3C,
    0x29,
    0x23,
    0x34,
    0x18,
    0x08,
    0x81,
    0x83,
    0xC6,
    0x79,
    0x22,
    0xA4,
    0xC8,
    0x48,
    0x49,
    0x91,
    0x91,
    0x91,
    0x91,
    0x49,
    0x48,
    0xEA,
    0x3D,
    0xB4,
    0x9D,
    0x97,
    0x87,
    0xAF,
    0xBF,
    0xA0,
    0xC0,
    0x4F,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};  //72x49
const uint8_t game_over[] PROGMEM = {
    0xE0,
    0xF8,
    0xFC,
    0xFC,
    0xFC,
    0xFE,
    0x1E,
    0x1F,
    0x0F,
    0x1F,
    0x1F,
    0x1F,
    0x3F,
    0x3F,
    0x3F,
    0x1F,
    0x0F,
    0x0E,
    0x00,
    0x00,
    0x00,
    0xC0,
    0xF0,
    0xFC,
    0xFE,
    0xFE,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFE,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0xFE,
    0xFE,
    0xFE,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xBC,
    0xF0,
    0xF8,
    0xFC,
    0xFE,
    0xFE,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x07,
    0x00,
    0x00,
    0xFE,
    0xFE,
    0xFE,
    0xFF,
    0xDF,
    0xDF,
    0xDF,
    0xDF,
    0xDF,
    0xDF,
    0xDF,
    0xCF,
    0xCF,
    0xC7,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xF7,
    0xC0,
    0xC0,
    0xDE,
    0x1E,
    0x1E,
    0x9F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x0F,
    0x80,
    0xF0,
    0xFE,
    0xFF,
    0xFF,
    0x7F,
    0x7F,
    0x38,
    0x3B,
    0x3F,
    0x7F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFE,
    0xD0,
    0x00,
    0xE0,
    0xFF,
    0xFF,
    0xFF,
    0xC3,
    0x1F,
    0x3F,
    0x7F,
    0x3F,
    0x3F,
    0x3F,
    0x01,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xF7,
    0xF7,
    0xC7,
    0xC7,
    0xC7,
    0xC7,
    0xC3,
    0xC3,
    0xC1,
    0xC1,
    0x00,
    0x01,
    0x03,
    0x03,
    0x03,
    0x07,
    0x87,
    0x87,
    0x87,
    0xC7,
    0xC7,
    0xC7,
    0xC3,
    0xC3,
    0xC3,
    0x81,
    0x80,
    0x82,
    0x03,
    0x03,
    0x03,
    0x03,
    0x81,
    0x81,
    0x80,
    0x80,
    0x80,
    0x00,
    0x00,
    0x03,
    0x07,
    0x03,
    0x03,
    0x83,
    0x81,
    0x80,
    0x81,
    0x83,
    0x03,
    0x03,
    0x83,
    0x81,
    0x81,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x01,
    0x00,
    0x00,
    0x80,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x03,
    0x01,
    0x01,
    0x00,
    0xF0,
    0xFC,
    0xFE,
    0xFF,
    0xFF,
    0xF7,
    0x07,
    0x03,
    0x03,
    0x03,
    0x07,
    0x0F,
    0x1F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x80,
    0x03,
    0x1F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x34,
    0x00,
    0xE0,
    0xF8,
    0xFF,
    0xFF,
    0xFF,
    0xBF,
    0x07,
    0x01,
    0x07,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xF7,
    0xE7,
    0xE7,
    0xE7,
    0xE7,
    0xE7,
    0xE7,
    0xE7,
    0xE3,
    0xE3,
    0x01,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFB,
    0xE3,
    0x87,
    0x87,
    0x87,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x7F,
    0x7F,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0F,
    0x3F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFC,
    0xF0,
    0xE0,
    0xE0,
    0xE0,
    0xF8,
    0xFF,
    0x7F,
    0x7F,
    0x3F,
    0x1F,
    0x00,
    0x00,
    0x00,
    0x03,
    0x1F,
    0xFF,
    0xFF,
    0xFF,
    0xF8,
    0xFF,
    0xFF,
    0xFF,
    0x7F,
    0x3F,
    0x07,
    0x00,
    0x00,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFD,
    0xF9,
    0xF1,
    0xF1,
    0xE1,
    0xE1,
    0xF1,
    0xF1,
    0xE0,
    0x60,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xF7,
    0xC7,
    0x07,
    0x0F,
    0x3F,
    0x7F,
    0xFF,
    0xFE,
    0xFF,
    0xFF,
    0xFC,
    0xF8,
    0xF0,
    0xE0,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
};  //71x41

const uint8_t dino_left[] PROGMEM = {
    // 16x16 - Dino on the left foot
    0xC0,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x80,
    0xC0,
    0xFE,
    0xFF,
    0xFD,
    0xBF,
    0xAF,
    0x2F,
    0x2F,
    0x0E,
    0x03,
    0x07,
    0x1E,
    0x1E,
    0xFF,
    0xBF,
    0x1F,
    0x3F,
    0x7F,
    0x4F,
    0x07,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
};  // 16x16 - Dino on the left foot

const uint8_t dino_right[] PROGMEM = {
    // 16x16 - Dino on the right foot
    0xC0,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x80,
    0xC0,
    0xFE,
    0xFF,
    0xFD,
    0xBF,
    0xAF,
    0x2F,
    0x2F,
    0x0E,
    0x03,
    0x07,
    0x1E,
    0x1E,
    0x7F,
    0x5F,
    0x1F,
    0x3F,
    0xFF,
    0x8F,
    0x07,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
};  // 16x16 - Dino on the right foot

const uint8_t dino_died[] PROGMEM = {
    // 16x16 - Dino died :-(
    0xC0,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x80,
    0xC0,
    0xFE,
    0xF1,
    0xF5,
    0xB1,
    0xBF,
    0x2F,
    0x2F,
    0x0E,
    0x03,
    0x07,
    0x1E,
    0x1E,
    0xFF,
    0xBF,
    0x1F,
    0x3F,
    0xFF,
    0x8F,
    0x07,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
};  // 16x16 - Dino died :-(

const uint8_t dino_roached_left[] PROGMEM = {
    // 16x8 - Dino bended down on the left foot
    0x03,
    0x06,
    0x6C,
    0x5C,
    0x1C,
    0xFE,
    0xBE,
    0x1E,
    0x7E,
    0x5E,
    0x0E,
    0x1C,
    0x3E,
    0x2A,
    0x2E,
    0x0E,
};  // 16x8 - Dino bended down on the left foot

const uint8_t dino_roached_right[] PROGMEM = {
    // 16x8 - Dino bended down on the left foot
    0x03,
    0x06,
    0xEC,
    0x9C,
    0x1C,
    0x7E,
    0x5E,
    0x1E,
    0x7E,
    0x5E,
    0x0E,
    0x1C,
    0x3E,
    0x2A,
    0x2E,
    0x0E,
};  // 16x8 - Dino bended down on the left foot

const uint8_t cactus_small[] PROGMEM = {
    // 16x16 - Small cactus
    0x00,
    0x00,
    0x00,
    0xE0,
    0xC0,
    0x00,
    0xF8,
    0xFC,
    0xFC,
    0xF8,
    0x80,
    0xFC,
    0xFE,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x03,
    0x07,
    0x06,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
};  // 16x16 - Small cactus

const uint8_t cactus_big[] PROGMEM = {
    // 24x16 - Big cactus
    0xF0,
    0x00,
    0xFC,
    0xFE,
    0xFE,
    0xC0,
    0x7C,
    0x00,
    0xF0,
    0x00,
    0xF8,
    0xFC,
    0x60,
    0x3E,
    0x00,
    0x80,
    0x00,
    0xF8,
    0x80,
    0xF8,
    0xFC,
    0xF8,
    0x30,
    0x1F,
    0x03,
    0x07,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0x00,
    0x01,
    0x03,
    0xFF,
    0xFF,
    0x00,
    0x1F,
    0x30,
    0xFF,
    0x60,
    0x3C,
    0x01,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x00,
};  // 24x16 - Big cactus

const uint8_t birdR[] PROGMEM = {

    0x30,
    0x38,
    0x3C,
    0x3C,
    0x3F,
    0x3F,
    0x7F,
    0x7C,
    0xF0,
    0xF0,
    0xF0,
    0xF0,
    0xF0,
    0xF0,
    0xF0,
    0xF0,
    0xE0,
    0xE0,
    0xC0,
    0xC0,
    0xC0,
    0xC0,
    0xC0,
    0xC0,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x7F,
    0xFF,
    0x7F,
    0x1F,
    0x0F,
    0x0F,
    0x0F,
    0x07,
    0x07,
    0x07,
    0x07,
    0x07,
    0x03,
    0x03,
    0x03,
    0x00,
};  // 24x16 - Bird with raised wings

const uint8_t birdL[] PROGMEM = {
    0x00,
    0x80,
    0xC0,
    0xE0,
    0xF0,
    0xF0,
    0xF0,
    0xC0,
    0x0F,
    0xFE,
    0xF8,
    0xF8,
    0xF0,
    0xE0,
    0xC0,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x02,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x07,
    0x0E,
    0x1F,
    0x7F,
    0x7F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFC,
    0xFC,
    0xF8,
    0xF8,
    0x78,
    0x68,
    0x68,
    0x68,
};  // 24x16 - Bird with lowered wings

const uint8_t dino_way[] PROGMEM = {
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
};  //128x1 - Dino way
const uint8_t dino_logo[] PROGMEM = {
    0xF8,
    0x0C,
    0x06,
    0x03,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0xC1,
    0xE1,
    0x61,
    0xE1,
    0xE1,
    0xE1,
    0xE1,
    0xE1,
    0xE1,
    0xE1,
    0xE1,
    0xC1,
    0xC1,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0xF9,
    0xFD,
    0xFD,
    0xF9,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0xF1,
    0xF9,
    0xF9,
    0xF1,
    0x01,
    0x81,
    0xC1,
    0x81,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x81,
    0xC1,
    0x81,
    0x01,
    0x01,
    0xF9,
    0xFD,
    0xFD,
    0xFD,
    0xF9,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x03,
    0x06,
    0x0C,
    0xF8,
    0xFF,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x80,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x7F,
    0x7F,
    0x6F,
    0x6F,
    0x6F,
    0x6F,
    0x0F,
    0x0F,
    0x0F,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xF8,
    0xFC,
    0xF8,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0xFC,
    0xFE,
    0xFC,
    0x00,
    0xC0,
    0xE0,
    0xC0,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xC0,
    0xFF,
    0x7F,
    0x3F,
    0x80,
    0xC0,
    0x80,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0x80,
    0x80,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0xFC,
    0xFE,
    0xFC,
    0x00,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3F,
    0x7F,
    0xFE,
    0xFC,
    0xF8,
    0xF0,
    0xF0,
    0xF8,
    0xFC,
    0xFE,
    0xFE,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x7F,
    0x02,
    0x02,
    0x0E,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x1F,
    0x3F,
    0x7F,
    0x70,
    0x70,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x30,
    0x30,
    0x3F,
    0x1F,
    0x0F,
    0x00,
    0x3F,
    0x7F,
    0xFF,
    0xC0,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0xFC,
    0xFC,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0xFC,
    0xFD,
    0x03,
    0x07,
    0x07,
    0x07,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x30,
    0x30,
    0x3F,
    0x1F,
    0x0F,
    0x00,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0x80,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x11,
    0x03,
    0x07,
    0x0F,
    0xFF,
    0x7F,
    0x3F,
    0x1F,
    0x0F,
    0x0F,
    0x3F,
    0x2F,
    0x23,
    0x01,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x11,
    0x13,
    0x07,
    0xFF,
    0xFF,
    0xFF,
    0x03,
    0x13,
    0x11,
    0x10,
    0x10,
    0x10,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x80,
    0xFF,
    0x00,
    0x01,
    0x03,
    0x06,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x05,
    0x05,
    0x05,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x05,
    0x05,
    0x05,
    0x05,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x05,
    0x05,
    0x05,
    0x05,
    0x04,
    0x04,
    0x04,
    0x04,
    0x05,
    0x05,
    0x05,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x05,
    0x05,
    0x05,
    0x05,
    0x05,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x06,
    0x03,
    0x01,
    0x00,
};  //117x35 - Dino logo

#include <PinChangeInterrupt.h>

bool dino_feet;
bool dino_move_direction;
byte dino_height;
byte prev_dino_height;
bool roached;
byte dinoU;
int8_t enemy_pos = -10;
bool enemy_type;
byte active_enemy_id;  //1 - small cactus; 2 - big cactus; 3 - bird

bool mode;
#define OLED_SOFT_BUFFER_64

#include <EncButton.h>
#include <GyverOLED.h>
#include <SPI.h>

GyverOLED<SSD1306_128x64, OLED_BUFFER, OLED_SPI, 7, 8, 9> oled;

Button up(2);
Button down(3);
Button ok(4);
Button left(5);
Button right(6);

#define REFRESH_RATE 30  //Hz
#define BOTTOM_HEIGHT 40

void setup()
{
  Serial.begin(500000);
  oled.init();
  oled.setPower(true);
  oled.clear();

  attachPCINT(digitalPinToPCINT(2), up_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(3), down_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(4), ok_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(5), left_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(6), right_tick, CHANGE);

  up.setStepTimeout(100);
  down.setStepTimeout(100);
  ok.setStepTimeout(100);
  left.setStepTimeout(100);
  right.setStepTimeout(100);

  up.setHoldTimeout(1000);
  down.setHoldTimeout(1000);
  ok.setHoldTimeout(1000);
  left.setHoldTimeout(1000);
  right.setHoldTimeout(1000);

  oled.setContrast(255);
  randomSeed(analogRead(A0));
}

void loop() { mode ? google_dino() : snake(); }

void draw_battery(byte percent)
{
  oled.drawByte(0b11111111);
  for (byte i = 0; i < 100 / 8; i++)
  {
    if (i < (percent) / 8)
      oled.drawByte(0b11111111);
    else
      oled.drawByte(0b10000001);
  }
  oled.drawByte(0b11111111);
  oled.drawByte(0b00111100);
  oled.drawByte(0b00111100);
}

void up_tick(void) { up.tick(); }
void down_tick(void) { down.tick(); }
void ok_tick(void) { ok.tick(); }
void right_tick(void) { right.tick(); }
void left_tick(void) { left.tick(); }
