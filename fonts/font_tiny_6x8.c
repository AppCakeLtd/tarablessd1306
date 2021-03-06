#include <ssd1306_font.h>


//WARNING: This Font Require X-GLCD Lib.
//         You can not use it with MikroE GLCD Lib.

//Font Generated by MikroElektronika GLCD Font Creator 1.2.0.0
//MikroElektronika 2011 
//http://www.mikroe.com 

//GLCD FontName : tiny6x8
//GLCD FontSize : 6 x 8

static const uint8_t tiny6x8[] = {
        0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char  
        0x03, 0x00, 0x00, 0x5F, 0x00, 0x00, 0x00,  // Code for char !
        0x04, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00,  // Code for char "
        0x05, 0x14, 0x7F, 0x14, 0x7F, 0x14, 0x00,  // Code for char #
        0x05, 0x24, 0x2A, 0x7F, 0x2A, 0x12, 0x00,  // Code for char $
        0x05, 0x23, 0x13, 0x08, 0x64, 0x62, 0x00,  // Code for char %
        0x05, 0x36, 0x49, 0x56, 0x20, 0x50, 0x00,  // Code for char &
        0x02, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,  // Code for char '
        0x04, 0x00, 0x1C, 0x22, 0x41, 0x00, 0x00,  // Code for char (
        0x04, 0x00, 0x41, 0x22, 0x1C, 0x00, 0x00,  // Code for char )
        0x05, 0x2A, 0x1C, 0x7F, 0x1C, 0x2A, 0x00,  // Code for char *
        0x05, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00,  // Code for char +
        0x03, 0x00, 0xB0, 0x70, 0x00, 0x00, 0x00,  // Code for char ,
        0x05, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00,  // Code for char -
        0x04, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00,  // Code for char .
        0x05, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00,  // Code for char /
        0x05, 0x3E, 0x51, 0x49, 0x45, 0x3E, 0x00,  // Code for char 0
        0x04, 0x00, 0x42, 0x7F, 0x40, 0x00, 0x00,  // Code for char 1
        0x05, 0x72, 0x49, 0x49, 0x49, 0x46, 0x00,  // Code for char 2
        0x05, 0x21, 0x41, 0x49, 0x4D, 0x33, 0x00,  // Code for char 3
        0x05, 0x18, 0x14, 0x12, 0x7F, 0x10, 0x00,  // Code for char 4
        0x05, 0x27, 0x45, 0x45, 0x45, 0x39, 0x00,  // Code for char 5
        0x05, 0x3C, 0x4A, 0x49, 0x49, 0x31, 0x00,  // Code for char 6
        0x05, 0x41, 0x21, 0x11, 0x09, 0x07, 0x00,  // Code for char 7
        0x05, 0x36, 0x49, 0x49, 0x49, 0x36, 0x00,  // Code for char 8
        0x05, 0x46, 0x49, 0x49, 0x29, 0x1E, 0x00,  // Code for char 9
        0x03, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,  // Code for char :
        0x03, 0x00, 0x80, 0x64, 0x00, 0x00, 0x00,  // Code for char ;
        0x04, 0x08, 0x14, 0x22, 0x41, 0x00, 0x00,  // Code for char <
        0x05, 0x14, 0x14, 0x14, 0x14, 0x14, 0x00,  // Code for char =
        0x05, 0x00, 0x41, 0x22, 0x14, 0x08, 0x00,  // Code for char >
        0x05, 0x02, 0x01, 0x59, 0x09, 0x06, 0x00,  // Code for char ?
        0x05, 0x3E, 0x41, 0x5D, 0x59, 0x0E, 0x00,  // Code for char @
        0x05, 0x7C, 0x12, 0x11, 0x12, 0x7C, 0x00,  // Code for char A
        0x05, 0x7F, 0x49, 0x49, 0x49, 0x36, 0x00,  // Code for char B
        0x05, 0x3E, 0x41, 0x41, 0x41, 0x22, 0x00,  // Code for char C
        0x05, 0x7F, 0x41, 0x41, 0x41, 0x3E, 0x00,  // Code for char D
        0x05, 0x7F, 0x49, 0x49, 0x49, 0x41, 0x00,  // Code for char E
        0x05, 0x7F, 0x09, 0x09, 0x09, 0x01, 0x00,  // Code for char F
        0x05, 0x3E, 0x41, 0x41, 0x51, 0x73, 0x00,  // Code for char G
        0x05, 0x7F, 0x08, 0x08, 0x08, 0x7F, 0x00,  // Code for char H
        0x04, 0x00, 0x41, 0x7F, 0x41, 0x00, 0x00,  // Code for char I
        0x05, 0x20, 0x40, 0x41, 0x3F, 0x01, 0x00,  // Code for char J
        0x05, 0x7F, 0x08, 0x14, 0x22, 0x41, 0x00,  // Code for char K
        0x05, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x00,  // Code for char L
        0x05, 0x7F, 0x02, 0x1C, 0x02, 0x7F, 0x00,  // Code for char M
        0x05, 0x7F, 0x04, 0x08, 0x10, 0x7F, 0x00,  // Code for char N
        0x05, 0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00,  // Code for char O
        0x05, 0x7F, 0x09, 0x09, 0x09, 0x06, 0x00,  // Code for char P
        0x05, 0x3E, 0x41, 0x51, 0x21, 0x5E, 0x00,  // Code for char Q
        0x05, 0x7F, 0x09, 0x19, 0x29, 0x46, 0x00,  // Code for char R
        0x05, 0x26, 0x49, 0x49, 0x49, 0x32, 0x00,  // Code for char S
        0x05, 0x01, 0x01, 0x7F, 0x01, 0x01, 0x00,  // Code for char T
        0x05, 0x3F, 0x40, 0x40, 0x40, 0x3F, 0x00,  // Code for char U
        0x05, 0x1F, 0x20, 0x40, 0x20, 0x1F, 0x00,  // Code for char V
        0x05, 0x3F, 0x40, 0x38, 0x40, 0x3F, 0x00,  // Code for char W
        0x05, 0x63, 0x14, 0x08, 0x14, 0x63, 0x00,  // Code for char X
        0x05, 0x03, 0x04, 0x78, 0x04, 0x03, 0x00,  // Code for char Y
        0x05, 0x61, 0x59, 0x49, 0x4D, 0x43, 0x00,  // Code for char Z
        0x04, 0x00, 0x7F, 0x41, 0x41, 0x00, 0x00,  // Code for char [
        0x05, 0x02, 0x04, 0x08, 0x10, 0x20, 0x00,  // Code for char BackSlash
        0x04, 0x00, 0x41, 0x41, 0x7F, 0x00, 0x00,  // Code for char ]
        0x05, 0x04, 0x02, 0x01, 0x02, 0x04, 0x00,  // Code for char ^
        0x05, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00,  // Code for char _
        0x04, 0x00, 0x03, 0x07, 0x08, 0x00, 0x00,  // Code for char `
        0x05, 0x20, 0x54, 0x54, 0x78, 0x40, 0x00,  // Code for char a
        0x05, 0x7F, 0x28, 0x44, 0x44, 0x38, 0x00,  // Code for char b
        0x05, 0x38, 0x44, 0x44, 0x44, 0x28, 0x00,  // Code for char c
        0x05, 0x38, 0x44, 0x44, 0x28, 0x7F, 0x00,  // Code for char d
        0x05, 0x38, 0x54, 0x54, 0x54, 0x18, 0x00,  // Code for char e
        0x04, 0x08, 0x7E, 0x09, 0x0A, 0x00, 0x00,  // Code for char f
        0x05, 0x18, 0xA4, 0xA4, 0x98, 0x78, 0x00,  // Code for char g
        0x05, 0x7F, 0x08, 0x04, 0x04, 0x78, 0x00,  // Code for char h
        0x04, 0x00, 0x44, 0x7D, 0x40, 0x00, 0x00,  // Code for char i
        0x04, 0x40, 0x80, 0x80, 0x7D, 0x00, 0x00,  // Code for char j
        0x04, 0x7F, 0x10, 0x28, 0x44, 0x00, 0x00,  // Code for char k
        0x04, 0x00, 0x41, 0x7F, 0x40, 0x00, 0x00,  // Code for char l
        0x05, 0x7C, 0x04, 0x78, 0x04, 0x78, 0x00,  // Code for char m
        0x05, 0x7C, 0x08, 0x04, 0x04, 0x78, 0x00,  // Code for char n
        0x05, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00,  // Code for char o
        0x05, 0xFC, 0x98, 0x24, 0x24, 0x18, 0x00,  // Code for char p
        0x05, 0x18, 0x24, 0x24, 0x98, 0xFC, 0x00,  // Code for char q
        0x05, 0x7C, 0x08, 0x04, 0x04, 0x08, 0x00,  // Code for char r
        0x05, 0x48, 0x54, 0x54, 0x54, 0x24, 0x00,  // Code for char s
        0x05, 0x04, 0x04, 0x3F, 0x44, 0x24, 0x00,  // Code for char t
        0x05, 0x3C, 0x40, 0x40, 0x20, 0x7C, 0x00,  // Code for char u
        0x05, 0x1C, 0x20, 0x40, 0x20, 0x1C, 0x00,  // Code for char v
        0x05, 0x3C, 0x40, 0x30, 0x40, 0x3C, 0x00,  // Code for char w
        0x05, 0x44, 0x28, 0x10, 0x28, 0x44, 0x00,  // Code for char x
        0x05, 0x4C, 0x90, 0x90, 0x90, 0x7C, 0x00,  // Code for char y
        0x05, 0x44, 0x64, 0x54, 0x4C, 0x44, 0x00,  // Code for char z
        0x04, 0x00, 0x08, 0x36, 0x41, 0x00, 0x00,  // Code for char {
        0x03, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00,  // Code for char |
        0x04, 0x00, 0x41, 0x36, 0x08, 0x00, 0x00,  // Code for char }
        0x05, 0x02, 0x01, 0x02, 0x04, 0x02, 0x00,  // Code for char ~
        0x04, 0x00, 0x7E, 0x42, 0x7E, 0x00, 0x00   // Code for char 
        };



const struct SSD1306_FontDef Font_tiny_6x8 = {
    tiny6x8,
    6,
    8,
    ' ',
    '\xFF',
    true
};