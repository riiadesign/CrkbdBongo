// ObliviousGmn // Dokuu // October 2020 // Logo

// image2cpp settings
// image needs to be horizontal, set rendering to vertical

// Default logo
void render_logo_r(void) {
    static const char PROGMEM dokuu[] = {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0x78, 0x78,
      0x78, 0x78, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
      0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x78, 0x78, 0x78,
      0x78, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0xf0, 0x70, 0x30, 0x30, 0x70, 0xf0, 0xe0,
      0xe0, 0x80, 0x00, 0x00, 0x80, 0xe0, 0xe0, 0xf0, 0x70, 0x30, 0x30, 0x70, 0x70, 0xf0, 0xe0, 0xc0,
      0x80, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xe0, 0x70, 0x70, 0x70, 0x30, 0x00, 0x00, 0xf0, 0xf0,
      0xf0, 0xe0, 0x70, 0x30, 0x30, 0x70, 0xf0, 0xf0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0,
      0x70, 0x30, 0x30, 0x30, 0x70, 0xf0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00,
      0x00, 0x00, 0x8f, 0x8f, 0x87, 0x87, 0x07, 0x0f, 0x0f, 0x1f, 0x7f, 0xff, 0xff, 0x0f, 0x0f, 0x0f,
      0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
      0x00, 0x0f, 0x8f, 0x87, 0x87, 0x07, 0x0f, 0x0f, 0x1f, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x3f, 0x7f, 0x7f, 0xf0, 0xe0, 0xe0, 0xe0, 0xe0, 0xf8, 0x78,
      0x38, 0x10, 0x00, 0x00, 0x1f, 0x3f, 0x7f, 0x70, 0xe0, 0xe0, 0xe0, 0xe0, 0xf0, 0x79, 0x7f, 0x3f,
      0x1f, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
      0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x3f, 0x7f, 0x7f,
      0xe6, 0xe6, 0xe6, 0xe6, 0xe6, 0x77, 0x77, 0x37, 0x07, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00,
      0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x80, 0x00,
      0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x8f, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
      0x00, 0x0f, 0x1f, 0x1f, 0x1f, 0x07, 0x00, 0x00, 0x80, 0xc0, 0xf8, 0xff, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
      0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
      0x1f, 0x1e, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
      0x1f, 0x1f, 0x1f, 0x1f, 0x1e, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00};
    oled_write_raw_P(dokuu, sizeof(dokuu));
}
