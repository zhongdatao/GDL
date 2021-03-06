const uint8_t CandaraFont12ptBitmaps[] PROGMEM = {
0xf3, 0xfa, 0x1d, 0x3b, 0x1d, 0x3f, 0x90, 0x0,
0xf3, 0xfa, 0x1d, 0x3b, 0x1d, 0x3f, 0x90, 0x0,
0xf3, 0xfa, 0x1d, 0x3b, 0x1d, 0x3f, 0x90, 0x0,
0xf3, 0xfa, 0x1d, 0x3b, 0x1d, 0x3f, 0x90, 0x0,
0xf3, 0xfa, 0x1d, 0x3b, 0x1d, 0x3f, 0x90, 0x0,
0xf3, 0xfa, 0x1d, 0x3b, 0x1d, 0x3f, 0x90, 0x0,
};

const gdl_Glyph_t CandaraFont12ptGlyphs[] PROGMEM = {
{0x0, 0x6, 0x6, 0x8, 0x0, 0x0, 0x5},
{0x4f60, 0x8, 0x6, 0x8, 0x0, 0x0, 0x5},
{0x597d, 0x8, 0x6, 0x8, 0x0, 0x0, 0x5},
{0xff0c, 0x8, 0x6, 0x8, 0x0, 0x0, 0x5},
{0x4e16, 0x8, 0x6, 0x8, 0x0, 0x0, 0x5},
{0x754c, 0x8, 0x6, 0x8, 0x0, 0x0, 0x5},
{0xff01, 0x8, 0x6, 0x8, 0x0, 0x0, 0x5},
{0}
};

const gdl_Font_t CandaraFont12pt PROGMEM = {
(uint8_t *)CandaraFont12ptBitmaps,
(gdl_Glyph_t *)CandaraFont12ptGlyphs,
1, 0, 0xd,
};

