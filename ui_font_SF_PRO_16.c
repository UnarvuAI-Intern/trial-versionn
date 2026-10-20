/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font /home/dhaanesvar/SquareLine/assets/SF-Pro-Display-Roman-Family/SF-Pro-Display-Black.otf -o /home/dhaanesvar/SquareLine/assets/SF-Pro-Display-Roman-Family/ui_font_SF_PRO_16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_SF_PRO_16
#define UI_FONT_SF_PRO_16 1
#endif

#if UI_FONT_SF_PRO_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf8, 0x1f, 0xf0,

    /* U+0022 "\"" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+0023 "#" */
    0x1d, 0x83, 0x30, 0x66, 0x3f, 0xf7, 0xfc, 0x77,
    0xc, 0xc7, 0xfe, 0xff, 0xc6, 0xe1, 0xdc, 0x3b,
    0x0,

    /* U+0024 "$" */
    0x8, 0x1f, 0x1f, 0xdd, 0x7e, 0x87, 0xe3, 0xfc,
    0xff, 0x1f, 0x85, 0xfa, 0xff, 0xe7, 0xe0, 0x40,

    /* U+0025 "%" */
    0x78, 0x23, 0xf1, 0x8c, 0xcc, 0x33, 0x30, 0xcd,
    0x83, 0xf6, 0x7, 0xb3, 0x81, 0xdf, 0x6, 0x6c,
    0x31, 0xb1, 0xc7, 0xc6, 0xe,

    /* U+0026 "&" */
    0x3e, 0xf, 0xe1, 0xdc, 0x3b, 0x87, 0x70, 0x7c,
    0xe, 0x73, 0xee, 0xe7, 0xdc, 0xf3, 0xff, 0x3e,
    0xf0,

    /* U+0027 "'" */
    0xff, 0xfe,

    /* U+0028 "(" */
    0x3b, 0x9d, 0xee, 0x73, 0x9c, 0xe7, 0x39, 0xe7,
    0x38, 0xe0,

    /* U+0029 ")" */
    0xe3, 0x9c, 0xf3, 0x9c, 0xe7, 0x39, 0xce, 0xf7,
    0x3b, 0x80,

    /* U+002A "*" */
    0x33, 0xff, 0xff, 0xfc, 0xc0,

    /* U+002B "+" */
    0x1c, 0xe, 0x3f, 0xff, 0xff, 0xf8, 0xe0, 0x70,
    0x38,

    /* U+002C "," */
    0x66, 0xee, 0xe0,

    /* U+002D "-" */
    0xff, 0xfe,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x39, 0xce, 0x73, 0x19, 0xce, 0x73, 0x9c, 0xce,
    0x73, 0x80,

    /* U+0030 "0" */
    0x1e, 0x1f, 0xe7, 0x3b, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xdc, 0xe7, 0xf8, 0x78,

    /* U+0031 "1" */
    0x3d, 0xff, 0xf7, 0x9c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7,

    /* U+0032 "2" */
    0x3e, 0x3f, 0xbc, 0xfc, 0x70, 0x38, 0x3c, 0x3c,
    0x3c, 0x3c, 0x3c, 0x3f, 0xff, 0xf0,

    /* U+0033 "3" */
    0x3e, 0x7f, 0xb8, 0xe0, 0x70, 0x38, 0xf8, 0x7c,
    0x7, 0x3, 0xf1, 0xff, 0xc7, 0xc0,

    /* U+0034 "4" */
    0xf, 0x81, 0xf0, 0x7e, 0xf, 0xc3, 0xb8, 0x67,
    0x1c, 0xe3, 0x1c, 0xff, 0xff, 0xfc, 0xe, 0x1,
    0xc0,

    /* U+0035 "5" */
    0x7f, 0x9f, 0xe7, 0x1, 0xc0, 0x77, 0x1f, 0xe7,
    0x3c, 0x7, 0x1, 0xdc, 0xf7, 0xf8, 0xfc,

    /* U+0036 "6" */
    0x1f, 0x1f, 0xe7, 0x3f, 0x80, 0xef, 0x3f, 0xef,
    0x3f, 0x87, 0xe1, 0xdc, 0xf7, 0xf8, 0x7c,

    /* U+0037 "7" */
    0xff, 0xff, 0xc1, 0xe0, 0xe0, 0xf0, 0x70, 0x78,
    0x38, 0x1c, 0x1e, 0xe, 0xf, 0x0,

    /* U+0038 "8" */
    0x1e, 0x1f, 0x9c, 0xee, 0x77, 0x39, 0xf9, 0xfd,
    0xe7, 0xf3, 0xf9, 0xdf, 0xc7, 0xc0,

    /* U+0039 "9" */
    0x3e, 0x1f, 0xef, 0x3b, 0x87, 0xe1, 0xfc, 0xf7,
    0xfc, 0xf7, 0x1, 0xfc, 0xe7, 0xf8, 0xf8,

    /* U+003A ":" */
    0xff, 0x81, 0xff,

    /* U+003B ";" */
    0xff, 0x80, 0x3f, 0xdb, 0x0,

    /* U+003C "<" */
    0x1, 0x87, 0xdf, 0xff, 0x8f, 0x7, 0xf8, 0xfe,
    0xf, 0x0, 0x80,

    /* U+003D "=" */
    0xff, 0xff, 0xff, 0xe0, 0xf, 0xff, 0xff, 0xfe,

    /* U+003E ">" */
    0xc0, 0x7c, 0x3f, 0xc3, 0xf0, 0x7b, 0xff, 0xf9,
    0xe0, 0x80, 0x0,

    /* U+003F "?" */
    0x3c, 0xfe, 0xe7, 0x7, 0xf, 0x1e, 0x3c, 0x38,
    0x0, 0x38, 0x38, 0x38,

    /* U+0040 "@" */
    0xf, 0x81, 0xff, 0x1e, 0x1c, 0xc0, 0x6e, 0xfd,
    0xef, 0xef, 0x77, 0x7b, 0xbb, 0xdd, 0xdf, 0xff,
    0x9b, 0xb8, 0xf0, 0x3, 0xfc, 0x7, 0xe0,

    /* U+0041 "A" */
    0xf, 0x1, 0xf8, 0x1f, 0x81, 0xf8, 0x1f, 0x83,
    0xfc, 0x39, 0xc3, 0x9c, 0x7f, 0xe7, 0xfe, 0x70,
    0xef, 0xf,

    /* U+0042 "B" */
    0xff, 0x3f, 0xee, 0x3b, 0x8e, 0xe3, 0xbf, 0xcf,
    0xfb, 0x87, 0xe1, 0xf8, 0x7f, 0xfb, 0xfc,

    /* U+0043 "C" */
    0x1f, 0x7, 0xf9, 0xff, 0x78, 0xfe, 0x1f, 0xc0,
    0x38, 0x7, 0x7, 0xf1, 0xef, 0xf8, 0xff, 0xf,
    0x80,

    /* U+0044 "D" */
    0xfe, 0x3f, 0xee, 0x3b, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0xef, 0xfb, 0xf8,

    /* U+0045 "E" */
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xff, 0xff, 0xe0,
    0xe0, 0xe0, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff,
    0xe0, 0xe0, 0xe0, 0xe0,

    /* U+0047 "G" */
    0x1f, 0x7, 0xf1, 0xff, 0x78, 0xfe, 0xf, 0xc0,
    0x38, 0xff, 0x1f, 0xf0, 0xef, 0xfc, 0xff, 0xf,
    0x80,

    /* U+0048 "H" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xff, 0xff,
    0xff, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0x87,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0x3, 0x81, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe,
    0x7, 0xe3, 0xff, 0xdf, 0xc7, 0xc0,

    /* U+004B "K" */
    0xe3, 0xf8, 0xee, 0x73, 0xbc, 0xfe, 0x3f, 0xf,
    0xe3, 0xfc, 0xef, 0x39, 0xee, 0x3b, 0x8f,

    /* U+004C "L" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xff, 0xff,

    /* U+004D "M" */
    0xf0, 0x7f, 0x83, 0xfe, 0x3f, 0xf1, 0xff, 0xdf,
    0xfe, 0xff, 0xb6, 0xfd, 0xf7, 0xef, 0xbf, 0x39,
    0xf9, 0xcf, 0xce, 0x70,

    /* U+004E "N" */
    0xe1, 0xfc, 0x7f, 0x1f, 0xe7, 0xfd, 0xff, 0x7e,
    0xff, 0xbf, 0xe7, 0xf8, 0xfe, 0x3f, 0x87,

    /* U+004F "O" */
    0x1f, 0x7, 0xf1, 0xff, 0x78, 0xfe, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xf1, 0xef, 0xf8, 0xfe, 0xf,
    0x80,

    /* U+0050 "P" */
    0xfe, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x1f, 0x9f,
    0xfe, 0xfe, 0x70, 0x38, 0x1c, 0x0,

    /* U+0051 "Q" */
    0x1f, 0x7, 0xf1, 0xff, 0x78, 0xfe, 0xf, 0xc1,
    0xf8, 0x3f, 0x3f, 0xf7, 0xef, 0xf8, 0xff, 0xf,
    0xe0, 0xe,

    /* U+0052 "R" */
    0xfe, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x1f, 0xfd,
    0xfe, 0xef, 0x73, 0xb9, 0xfc, 0x70,

    /* U+0053 "S" */
    0x3e, 0x3f, 0xb8, 0xfc, 0xf, 0xc7, 0xf9, 0xfe,
    0x3f, 0x3, 0xf1, 0xff, 0xc7, 0xc0,

    /* U+0054 "T" */
    0xff, 0xff, 0xc7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x80,

    /* U+0055 "U" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xf3, 0xff, 0xf7, 0xf8, 0x7c,

    /* U+0056 "V" */
    0xf0, 0xee, 0x3d, 0xe7, 0xbc, 0xe7, 0x9c, 0x77,
    0x8e, 0xf1, 0xfc, 0x1f, 0x83, 0xf0, 0x7c, 0xf,
    0x80,

    /* U+0057 "W" */
    0xf1, 0xcf, 0x73, 0xce, 0x73, 0xce, 0x73, 0xce,
    0x7b, 0xce, 0x3f, 0xfc, 0x3f, 0xfc, 0x3f, 0x7c,
    0x3e, 0x7c, 0x1e, 0x7c, 0x1e, 0x78, 0x1e, 0x78,

    /* U+0058 "X" */
    0x70, 0xef, 0x3c, 0xe7, 0x1f, 0xc1, 0xf8, 0x3e,
    0x7, 0xc0, 0xfc, 0x3f, 0x87, 0x79, 0xe7, 0xb8,
    0xf0,

    /* U+0059 "Y" */
    0xf1, 0xee, 0x39, 0xef, 0x1d, 0xc3, 0xb8, 0x3e,
    0x7, 0xc0, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xc1, 0xc1, 0xe0, 0xe0, 0xf0, 0xf0,
    0x70, 0x78, 0x38, 0x3f, 0xff, 0xf0,

    /* U+005B "[" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0xff, 0xc0,

    /* U+005C "\\" */
    0xe7, 0x38, 0xc7, 0x39, 0xce, 0x71, 0x8e, 0x73,
    0x9c, 0xe0,

    /* U+005D "]" */
    0xff, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0xff, 0xe0,

    /* U+005E "^" */
    0x1c, 0xf, 0x83, 0xe1, 0xdc, 0x63, 0xb8, 0xe0,

    /* U+005F "_" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+0060 "`" */
    0xe6, 0x30,

    /* U+0061 "a" */
    0x3c, 0x7f, 0xe7, 0x7f, 0xff, 0xe7, 0xe7, 0xff,
    0x77,

    /* U+0062 "b" */
    0xe0, 0x70, 0x38, 0x1d, 0xcf, 0xf7, 0xbf, 0x8f,
    0xc7, 0xe3, 0xfb, 0xff, 0xdd, 0xc0,

    /* U+0063 "c" */
    0x3e, 0x3f, 0xb9, 0xdc, 0x7e, 0x7, 0x1b, 0x9c,
    0xfe, 0x3e, 0x0,

    /* U+0064 "d" */
    0x3, 0x81, 0xc0, 0xe7, 0x77, 0xff, 0xbf, 0x8f,
    0xc7, 0xe3, 0xfb, 0xdf, 0xe7, 0x70,

    /* U+0065 "e" */
    0x3e, 0x3f, 0xb9, 0xff, 0xff, 0xff, 0x3, 0x8e,
    0xfe, 0x3e, 0x0,

    /* U+0066 "f" */
    0x3d, 0xf7, 0x3f, 0xfd, 0xc7, 0x1c, 0x71, 0xc7,
    0x1c,

    /* U+0067 "g" */
    0x3b, 0xbf, 0xfd, 0xfc, 0x7e, 0x3f, 0x1f, 0xde,
    0xff, 0x3b, 0xf1, 0xdf, 0xc7, 0xc0,

    /* U+0068 "h" */
    0xe0, 0x70, 0x38, 0x1d, 0xef, 0xff, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x70,

    /* U+0069 "i" */
    0xff, 0x8f, 0xff, 0xff, 0xfe,

    /* U+006A "j" */
    0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7f, 0xe0,

    /* U+006B "k" */
    0xe0, 0x70, 0x38, 0x1c, 0xee, 0xf7, 0x73, 0xf1,
    0xf8, 0xfe, 0x77, 0x3b, 0xdc, 0xf0,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+006D "m" */
    0xee, 0x77, 0xff, 0xf9, 0xcf, 0xce, 0x7e, 0x73,
    0xf3, 0x9f, 0x9c, 0xfc, 0xe7, 0xe7, 0x38,

    /* U+006E "n" */
    0xef, 0x7f, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0x80,

    /* U+006F "o" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x1f, 0xde,
    0xfe, 0x3e, 0x0,

    /* U+0070 "p" */
    0xee, 0x7f, 0xbd, 0xfc, 0x7e, 0x3f, 0x1f, 0xdf,
    0xfe, 0xee, 0x70, 0x38, 0x1c, 0x0,

    /* U+0071 "q" */
    0x3b, 0xbf, 0xfd, 0xfc, 0x7e, 0x3f, 0x1f, 0xde,
    0xff, 0x3b, 0x81, 0xc0, 0xe0, 0x70,

    /* U+0072 "r" */
    0xef, 0xff, 0x38, 0xe3, 0x8e, 0x38, 0xe0,

    /* U+0073 "s" */
    0x7c, 0x7f, 0xb9, 0xdf, 0x87, 0xf1, 0xfb, 0x9d,
    0xfe, 0x7e, 0x0,

    /* U+0074 "t" */
    0x71, 0xcf, 0xff, 0x71, 0xc7, 0x1c, 0x71, 0xf3,
    0xc0,

    /* U+0075 "u" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xff, 0x7b, 0x80,

    /* U+0076 "v" */
    0xe3, 0xf9, 0xdd, 0xce, 0xe7, 0x71, 0xb8, 0xf8,
    0x7c, 0x1e, 0x0,

    /* U+0077 "w" */
    0xe7, 0x9f, 0xde, 0xe7, 0x7b, 0x9d, 0xee, 0x77,
    0xb9, 0xf7, 0xc3, 0xcf, 0xf, 0x3c, 0x3c, 0xf0,

    /* U+0078 "x" */
    0xf3, 0xbb, 0x9f, 0xc7, 0xc1, 0xe1, 0xf1, 0xdc,
    0xee, 0xf3, 0x80,

    /* U+0079 "y" */
    0xf3, 0xdc, 0xe7, 0x39, 0xce, 0x7f, 0xf, 0xc3,
    0xf0, 0xfc, 0x1e, 0x7, 0x87, 0xc1, 0xe0,

    /* U+007A "z" */
    0xff, 0xff, 0xe, 0x1e, 0x3c, 0x38, 0x78, 0xff,
    0xff,

    /* U+007B "{" */
    0x1e, 0x7c, 0xe1, 0xc3, 0x87, 0x3c, 0x70, 0xf0,
    0x70, 0xe1, 0xc3, 0x87, 0xc7, 0x80,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,

    /* U+007D "}" */
    0xf1, 0xf0, 0xe1, 0xc3, 0x87, 0x7, 0x87, 0x1e,
    0x70, 0xe1, 0xc3, 0x9f, 0x3c, 0x0,

    /* U+007E "~" */
    0x78, 0x7f, 0xff, 0xe1, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 49, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 94, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 130, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 10, .adv_w = 172, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 177, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 43, .adv_w = 249, .box_w = 14, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 188, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 73, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 83, .adv_w = 113, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 93, .adv_w = 113, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 103, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 108, .adv_w = 177, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 117, .adv_w = 68, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 120, .adv_w = 116, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 122, .adv_w = 68, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 84, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 134, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 132, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 164, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 177, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 170, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 153, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 179, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 68, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 68, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 284, .adv_w = 177, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 177, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 303, .adv_w = 177, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 231, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 349, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 173, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 189, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 185, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 191, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 195, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 78, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 159, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 228, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 187, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 198, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 568, .adv_w = 168, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 198, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 600, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 614, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 628, .adv_w = 159, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 184, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 657, .adv_w = 186, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 674, .adv_w = 258, .box_w = 16, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 698, .adv_w = 188, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 184, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 113, .box_w = 6, .box_h = 15, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 758, .adv_w = 84, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 768, .adv_w = 113, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 778, .adv_w = 177, .box_w = 10, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 786, .adv_w = 160, .box_w = 10, .box_h = 3, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 790, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 792, .adv_w = 152, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 164, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 151, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 826, .adv_w = 163, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 840, .adv_w = 153, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 851, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 860, .adv_w = 163, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 874, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 888, .adv_w = 71, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 893, .adv_w = 71, .box_w = 4, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 901, .adv_w = 151, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 915, .adv_w = 72, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 236, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 946, .adv_w = 157, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 957, .adv_w = 163, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 971, .adv_w = 163, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 985, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 992, .adv_w = 144, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1003, .adv_w = 105, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1023, .adv_w = 147, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1034, .adv_w = 221, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 150, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1061, .adv_w = 151, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1076, .adv_w = 139, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1085, .adv_w = 113, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1099, .adv_w = 69, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1105, .adv_w = 113, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1119, .adv_w = 177, .box_w = 9, .box_h = 4, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 0, 0, 3, 4, 5, 4, 5,
    6, 7, 8, 9, 10, 11, 12, 13,
    14, 10, 7, 15, 15, 0, 16, 17,
    18, 19, 20, 21, 22, 23, 24, 25,
    26, 27, 27, 28, 29, 30, 27, 27,
    23, 31, 23, 32, 33, 34, 28, 35,
    36, 37, 38, 39, 0, 40, 0, 3,
    41, 0, 42, 43, 44, 45, 46, 47,
    48, 42, 49, 49, 50, 45, 42, 42,
    43, 43, 48, 51, 52, 53, 54, 55,
    56, 57, 55, 58, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 2, 3, 0, 0, 0, 4,
    3, 0, 0, 5, 6, 7, 6, 7,
    8, 9, 10, 11, 12, 13, 14, 9,
    15, 16, 17, 18, 18, 19, 20, 0,
    21, 22, 23, 24, 25, 24, 24, 24,
    25, 24, 24, 26, 24, 24, 24, 24,
    25, 24, 25, 24, 27, 28, 29, 30,
    31, 32, 33, 34, 0, 35, 0, 5,
    36, 0, 37, 38, 39, 39, 39, 40,
    39, 38, 41, 42, 38, 38, 43, 43,
    39, 43, 39, 43, 44, 45, 46, 47,
    48, 49, 47, 50, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 4, -4, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -15, 0, -7, -7,
    0, 0, 0, -4, 0, -4, 0, -7,
    0, -4, -4, 0, -7, -7, -11, 0,
    0, 0, -2, 0, 0, -11, 0, -7,
    -7, 0, -11, 0, -7, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, -4, -4,
    -4, -4, 0, 0, 0, 0, 4, -4,
    8, 0, -5, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -17, 0, 0, 0, 0, 0, 0, 0,
    -7, -10, 0, -4, 5, -4, -2, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, 3, 0, 0, 0, 8, 4, 1,
    4, 4, 4, 0, 0, 0, 0, 3,
    -2, 4, 18, 0, 0, 0, 0, 0,
    3, 4, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, 0, 0, 0,
    0, -2, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, -4, -1, -5, 0,
    0, -9, 0, -5, -5, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -4, -4, -1,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, -1, -2, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, -4, 0, 0, -5,
    0, -6, -6, -6, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -2, -5, -4, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, 0, 0, -5, -5, -5, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, -1, 0, -9, -9, -10,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    -25, 0, -1, 0, 0, 0, -10, 0,
    0, 0, 0, 0, -11, 0, 0, 0,
    -11, 0, -2, -9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    -4, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -14, 0,
    0, 0, 0, 0, 0, 0, -11, 0,
    0, 0, 0, -7, 0, -7, -7, -11,
    -12, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -4,
    -5, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, 0, 0, -7, 0, 0, 0, 0,
    -4, -7, -4, 0, 0, 0, -5, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -11, 0, 0, 0, 0, -7,
    0, -7, -7, -10, -12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, 0, -6, -7, 0, 0, -7, -11,
    0, -4, 0, -7, -2, -4, -4, 0,
    -11, -7, -11, -4, 0, 0, -12, -4,
    -7, -24, -7, -25, -17, 0, -27, 0,
    -11, 0, -4, 0, -7, -5, 0, 0,
    0, -2, -11, -5, -14, -14, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, -4, -4, -4,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 1, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    -12, 0, 0, 0, 0, -2, 0, -5,
    -5, -7, -10, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    4, 4, 0, 0, 0, -1, 0, 0,
    0, 0, -7, -7, 0, 0, 0, 0,
    0, -1, -1, 0, 0, 0, 0, -4,
    -1, 0, -10, 0, 0, 0, 0, -9,
    0, -6, -6, -10, -12, -2, -7, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, -1,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, -15, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -7, -4, 0, 0, -12, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -16, -2, 0, -2, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, -1, 0, -2,
    -2, -5, -7, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, -2, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -11, -11, 0, 0,
    -11, -4, 0, -6, -4, -5, 0, -5,
    -6, 0, -11, -11, -4, -7, 0, 0,
    -7, -4, -2, 0, -1, 0, 0, 0,
    0, 0, 0, 0, -4, 0, -10, 0,
    0, 0, 0, -4, -7, -4, -10, -10,
    0, 0, 0, 0, -20, 0, -20, -7,
    0, 0, -5, -11, 0, -1, 0, -4,
    -5, 0, 0, 0, -11, -4, -15, 0,
    0, 0, -7, 0, 0, -19, -2, -15,
    -15, 0, -32, 0, -15, 0, 0, 0,
    0, -2, 0, 0, 0, 0, -10, 0,
    -12, -12, 0, 0, 0, 0, 0, -6,
    0, -4, -14, -11, 0, 0, 0, 0,
    -4, -2, 0, 0, 0, 0, -4, -4,
    0, 0, -20, 0, 0, -12, 0, 0,
    0, -4, -4, -7, -10, -1, 0, -25,
    -6, 0, -2, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -4, 0, -14, 0,
    0, 0, -5, 0, -2, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, -5, 0, -4, -4, -7,
    -14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, -4, -7,
    -19, -15, -5, 0, 0, 0, -6, -1,
    0, -4, -1, -4, -7, -7, 0, -7,
    -24, 0, -9, -11, 0, 0, 0, 0,
    0, 0, 0, 0, 8, -15, -27, 0,
    -25, 0, -5, 0, -5, -16, 0, -5,
    0, 0, 0, 0, 0, 0, 0, -7,
    -4, -7, -14, -15, -7, -2, -2, -4,
    -9, -5, 0, -9, -9, -4, -7, -7,
    0, -7, -25, 0, -5, -11, -4, 0,
    0, 0, 0, 0, 0, 0, 4, -20,
    -16, 0, -17, 0, 0, 0, -6, -14,
    -4, -7, -1, -1, -1, -6, 0, 0,
    0, -7, -4, -7, -11, -15, -7, -2,
    -2, -4, -9, -5, 0, -9, -9, -4,
    -7, -7, -4, -7, -17, 0, -6, -11,
    -4, 0, 0, 0, 0, 0, 0, 0,
    4, -17, -16, 0, -16, 0, 0, 0,
    -6, -12, -2, -7, -1, -1, -1, -7,
    0, 0, 0, 0, -11, -11, 0, 0,
    -10, -4, 0, -7, -7, -7, 0, -10,
    -6, 0, -11, -7, -7, -10, 0, 0,
    -7, -4, -7, 0, 0, 0, 0, 0,
    0, 0, 4, 0, -6, 0, -11, 0,
    0, 0, 0, -7, -5, -7, -7, -7,
    0, 0, 0, 0, 0, -11, -11, -12,
    -22, -16, -11, 0, -7, -9, -14, -2,
    0, -10, -10, -7, -12, -12, -4, -12,
    -27, 0, -19, -15, -14, 0, 0, 0,
    0, 0, 0, 0, 4, -20, -29, 0,
    -31, -7, -4, -4, -11, -26, -4, -16,
    -11, -11, -9, -16, 0, 0, 0, 0,
    -7, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -4,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, -11, -7, -15, -15, -4, -12, 0,
    0, 0, 0, 3, 3, -4, 15, 0,
    0, 0, 0, 0, -7, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -15, 0, -20, -17, 0,
    -20, 0, 0, -4, -2, 0, -7, 0,
    0, 23, 0, -2, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, -20, 0, -14,
    -14, 0, -26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, -2, -2,
    0, 0, -7, 0, 0, 0, 0, -25,
    0, -17, -16, -11, -31, -2, -2, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, -2, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -4, 0, 0, 0,
    0, -11, 0, -15, -11, -11, -20, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -2, -4, 0,
    -4, 0, 0, 0, 0, -25, 0, -17,
    -11, -11, -20, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, -1, -1, 0, 0, 0, 0, 0,
    0, 0, -4, -4, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, -4, -5,
    0, 0, -10, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0,
    -6, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -5, -7, 0, -11, 0,
    -2, 3, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, -7, 0, 0,
    0, 0, -6, -4, 0, 0, 0, 0,
    0, 0, -7, 0, 3, 0, -1, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -15, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, -7, 0, -1,
    0, -1, -1, -2, -4, 0, 3, 0,
    -4, 0, -2, 1, 0, 0, 0, 0,
    4, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, -4, 0, 0, -2, 0, 0, 1,
    0, -16, 0, -12, -12, -7, -26, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, -1, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, -1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, -2, -1,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, -7,
    -7, 0, -15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0,
    0, -4, -15, -6, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, -4, -4,
    0, 0, -14, 0, 0, -5, 0, 0,
    0, -1, -1, -7, -11, 0, 3, -15,
    -4, 0, -4, 0, 0, 0, 0, -1,
    0, 0, 4, 4, 4, 0, 0, 0,
    4, 0, 0, -4, -15, -7, 0, 0,
    0, 0, -2, -2, 0, -2, 0, 0,
    -4, -4, 0, 0, -14, 0, 0, -5,
    0, 0, 0, -1, -1, -7, -11, 0,
    4, 0, -6, 0, -4, 0, 0, 0,
    0, -1, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, -2, -4, 0, 0, -2,
    0, 0, -5, -5, 0, 0, 0, 0,
    -4, -4, 0, 0, 0, -1, -1, 0,
    -9, 0, 0, 0, -1, 0, -5, 0,
    0, 0, 0, -1, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, -6,
    -7, 0, -16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 58,
    .right_class_cnt     = 50,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_SF_PRO_16 = {
#else
lv_font_t ui_font_SF_PRO_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_SF_PRO_16*/

