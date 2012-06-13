#ifndef FRAMEBUFFER_FONTS_TOM_THUMB_H_
#define FRAMEBUFFER_FONTS_TOM_THUMB_H_
// source: http://robey.lag.net//2010/01/23/tiny-monospace-font.html
#ifdef __cplusplus
namespace Fonts
{
#endif
static const unsigned char tom_thumb[] = {
    3, // w
    6, // h
    4, // stride
    0x20, // ascii index of first non-empty character in font
    // data
    0x01, 0x00, 0x00, 0x00,  // 32 ' '
    0x01, 0x17, 0x00, 0x00,  // 33 '!'
    0x03, 0x03, 0x00, 0x03,  // 34 '"'
    0x03, 0x1f, 0x0a, 0x1f,  // 35 '#'
    0x03, 0x0a, 0x1f, 0x05,  // 36 '$'
    0x03, 0x09, 0x04, 0x12,  // 37 '%'
    0x03, 0x0f, 0x17, 0x1c,  // 38 '&'
    0x01, 0x03, 0x00, 0x00,  // 39 '''
    0x02, 0x0e, 0x11, 0x00,  // 40 '('
    0x02, 0x11, 0x0e, 0x00,  // 41 ')'
    0x03, 0x05, 0x02, 0x05,  // 42 '*'
    0x03, 0x04, 0x0e, 0x04,  // 43 '+'
    0x02, 0x10, 0x08, 0x00,  // 44 ','
    0x03, 0x04, 0x04, 0x04,  // 45 '-'
    0x01, 0x10, 0x00, 0x00,  // 46 '.'
    0x03, 0x18, 0x04, 0x03,  // 47 '/'
    0x03, 0x1e, 0x11, 0x0f,  // 48 '0'
    0x02, 0x02, 0x1f, 0x00,  // 49 '1'
    0x03, 0x19, 0x15, 0x12,  // 50 '2'
    0x03, 0x11, 0x15, 0x0a,  // 51 '3'
    0x03, 0x07, 0x04, 0x1f,  // 52 '4'
    0x03, 0x17, 0x15, 0x09,  // 53 '5'
    0x03, 0x1e, 0x15, 0x1d,  // 54 '6'
    0x03, 0x19, 0x05, 0x03,  // 55 '7'
    0x03, 0x1f, 0x15, 0x1f,  // 56 '8'
    0x03, 0x17, 0x15, 0x0f,  // 57 '9'
    0x01, 0x0a, 0x00, 0x00,  // 58 ':'
    0x02, 0x10, 0x0a, 0x00,  // 59 ';'
    0x03, 0x04, 0x0a, 0x11,  // 60 '<'
    0x03, 0x0a, 0x0a, 0x0a,  // 61 '='
    0x03, 0x11, 0x0a, 0x04,  // 62 '>'
    0x03, 0x01, 0x15, 0x03,  // 63 '?'
    0x03, 0x0e, 0x15, 0x16,  // 64 '@'
    0x03, 0x1e, 0x05, 0x1e,  // 65 'A'
    0x03, 0x1f, 0x15, 0x0a,  // 66 'B'
    0x03, 0x0e, 0x11, 0x11,  // 67 'C'
    0x03, 0x1f, 0x11, 0x0e,  // 68 'D'
    0x03, 0x1f, 0x15, 0x15,  // 69 'E'
    0x03, 0x1f, 0x05, 0x05,  // 70 'F'
    0x03, 0x0e, 0x15, 0x1d,  // 71 'G'
    0x03, 0x1f, 0x04, 0x1f,  // 72 'H'
    0x03, 0x11, 0x1f, 0x11,  // 73 'I'
    0x03, 0x08, 0x10, 0x0f,  // 74 'J'
    0x03, 0x1f, 0x04, 0x1b,  // 75 'K'
    0x03, 0x1f, 0x10, 0x10,  // 76 'L'
    0x03, 0x1f, 0x06, 0x1f,  // 77 'M'
    0x03, 0x1f, 0x0e, 0x1f,  // 78 'N'
    0x03, 0x0e, 0x11, 0x0e,  // 79 'O'
    0x03, 0x1f, 0x05, 0x02,  // 80 'P'
    0x03, 0x0e, 0x19, 0x1e,  // 81 'Q'
    0x03, 0x1f, 0x0d, 0x16,  // 82 'R'
    0x03, 0x12, 0x15, 0x09,  // 83 'S'
    0x03, 0x01, 0x1f, 0x01,  // 84 'T'
    0x03, 0x0f, 0x10, 0x1f,  // 85 'U'
    0x03, 0x07, 0x18, 0x07,  // 86 'V'
    0x03, 0x1f, 0x0c, 0x1f,  // 87 'W'
    0x03, 0x1b, 0x04, 0x1b,  // 88 'X'
    0x03, 0x03, 0x1c, 0x03,  // 89 'Y'
    0x03, 0x19, 0x15, 0x13,  // 90 'Z'
    0x03, 0x1f, 0x11, 0x11,  // 91 '['
    0x03, 0x02, 0x04, 0x08,  // 92 '\'
    0x03, 0x11, 0x11, 0x1f,  // 93 ']'
    0x03, 0x02, 0x01, 0x02,  // 94 '^'
    0x03, 0x10, 0x10, 0x10,  // 95 '_'
    0x02, 0x01, 0x02, 0x00,  // 96 '`'
    0x03, 0x1a, 0x16, 0x1c,  // 97 'a'
    0x03, 0x1f, 0x12, 0x0c,  // 98 'b'
    0x03, 0x0c, 0x12, 0x12,  // 99 'c'
    0x03, 0x0c, 0x12, 0x1f,  // 100 'd'
    0x03, 0x0c, 0x1a, 0x16,  // 101 'e'
    0x03, 0x04, 0x1e, 0x05,  // 102 'f'
    0x03, 0x0c, 0x2a, 0x1e,  // 103 'g'
    0x03, 0x1f, 0x02, 0x1c,  // 104 'h'
    0x01, 0x1d, 0x00, 0x00,  // 105 'i'
    0x03, 0x10, 0x20, 0x1d,  // 106 'j'
    0x03, 0x1f, 0x0c, 0x12,  // 107 'k'
    0x03, 0x11, 0x1f, 0x10,  // 108 'l'
    0x03, 0x1e, 0x0e, 0x1e,  // 109 'm'
    0x03, 0x1e, 0x02, 0x1c,  // 110 'n'
    0x03, 0x0c, 0x12, 0x0c,  // 111 'o'
    0x03, 0x3e, 0x12, 0x0c,  // 112 'p'
    0x03, 0x0c, 0x12, 0x3e,  // 113 'q'
    0x03, 0x1c, 0x02, 0x02,  // 114 'r'
    0x03, 0x14, 0x1e, 0x0a,  // 115 's'
    0x03, 0x02, 0x1f, 0x12,  // 116 't'
    0x03, 0x0e, 0x10, 0x1e,  // 117 'u'
    0x03, 0x0e, 0x18, 0x0e,  // 118 'v'
    0x03, 0x1e, 0x1c, 0x1e,  // 119 'w'
    0x03, 0x12, 0x0c, 0x12,  // 120 'x'
    0x03, 0x06, 0x28, 0x1e,  // 121 'y'
    0x03, 0x1a, 0x1e, 0x16,  // 122 'z'
    0x03, 0x04, 0x1b, 0x11,  // 123 '{'
    0x01, 0x1b, 0x00, 0x00,  // 124 '|'
    0x03, 0x11, 0x1b, 0x04,  // 125 '}'
    0x03, 0x02, 0x03, 0x01,  // 126 '~'
    0x00, 0x00, 0x00, 0x00,  // 127 ''
    0x00, 0x00, 0x00, 0x00,  // 128 '�'
    0x00, 0x00, 0x00, 0x00,  // 129 '�'
    0x00, 0x00, 0x00, 0x00,  // 130 '�'
    0x00, 0x00, 0x00, 0x00,  // 131 '�'
    0x00, 0x00, 0x00, 0x00,  // 132 '�'
    0x00, 0x00, 0x00, 0x00,  // 133 '�'
    0x00, 0x00, 0x00, 0x00,  // 134 '�'
    0x00, 0x00, 0x00, 0x00,  // 135 '�'
    0x00, 0x00, 0x00, 0x00,  // 136 '�'
    0x00, 0x00, 0x00, 0x00,  // 137 '�'
    0x00, 0x00, 0x00, 0x00,  // 138 '�'
    0x00, 0x00, 0x00, 0x00,  // 139 '�'
    0x00, 0x00, 0x00, 0x00,  // 140 '�'
    0x00, 0x00, 0x00, 0x00,  // 141 '�'
    0x00, 0x00, 0x00, 0x00,  // 142 '�'
    0x00, 0x00, 0x00, 0x00,  // 143 '�'
    0x00, 0x00, 0x00, 0x00,  // 144 '�'
    0x00, 0x00, 0x00, 0x00,  // 145 '�'
    0x00, 0x00, 0x00, 0x00,  // 146 '�'
    0x00, 0x00, 0x00, 0x00,  // 147 '�'
    0x00, 0x00, 0x00, 0x00,  // 148 '�'
    0x00, 0x00, 0x00, 0x00,  // 149 '�'
    0x00, 0x00, 0x00, 0x00,  // 150 '�'
    0x00, 0x00, 0x00, 0x00,  // 151 '�'
    0x00, 0x00, 0x00, 0x00,  // 152 '�'
    0x00, 0x00, 0x00, 0x00,  // 153 '�'
    0x00, 0x00, 0x00, 0x00,  // 154 '�'
    0x00, 0x00, 0x00, 0x00,  // 155 '�'
    0x00, 0x00, 0x00, 0x00,  // 156 '�'
    0x00, 0x00, 0x00, 0x00,  // 157 '�'
    0x00, 0x00, 0x00, 0x00,  // 158 '�'
    0x00, 0x00, 0x00, 0x00,  // 159 '�'
    0x00, 0x00, 0x00, 0x00,  // 160 '�'
    0x01, 0x1d, 0x00, 0x00,  // 161 '�'
    0x03, 0x0e, 0x1b, 0x0a,  // 162 '�'
    0x03, 0x14, 0x1f, 0x15,  // 163 '�'
    0x03, 0x15, 0x0e, 0x15,  // 164 '�'
    0x03, 0x0b, 0x1c, 0x0b,  // 165 '�'
    0x01, 0x1b, 0x00, 0x00,  // 166 '�'
    0x03, 0x14, 0x1b, 0x05,  // 167 '�'
    0x03, 0x01, 0x00, 0x01,  // 168 '�'
    0x03, 0x02, 0x05, 0x05,  // 169 '�'
    0x03, 0x16, 0x15, 0x17,  // 170 '�'
    0x02, 0x02, 0x05, 0x00,  // 171 '�'
    0x03, 0x02, 0x02, 0x06,  // 172 '�'
    0x02, 0x04, 0x04, 0x00,  // 173 '�'
    0x03, 0x07, 0x03, 0x04,  // 174 '�'
    0x03, 0x01, 0x01, 0x01,  // 175 '�'
    0x03, 0x02, 0x05, 0x02,  // 176 '�'
    0x03, 0x12, 0x17, 0x12,  // 177 '�'
    0x03, 0x01, 0x07, 0x04,  // 178 '�'
    0x03, 0x05, 0x07, 0x07,  // 179 '�'
    0x02, 0x02, 0x01, 0x00,  // 180 '�'
    0x03, 0x1f, 0x08, 0x07,  // 181 '�'
    0x03, 0x02, 0x1d, 0x1f,  // 182 '�'
    0x03, 0x0e, 0x0e, 0x0e,  // 183 '�'
    0x03, 0x10, 0x14, 0x08,  // 184 '�'
    0x01, 0x07, 0x00, 0x00,  // 185 '�'
    0x03, 0x12, 0x15, 0x12,  // 186 '�'
    0x02, 0x05, 0x02, 0x00,  // 187 '�'
    0x03, 0x03, 0x08, 0x18,  // 188 '�'
    0x03, 0x0b, 0x18, 0x10,  // 189 '�'
    0x03, 0x03, 0x0b, 0x18,  // 190 '�'
    0x03, 0x18, 0x15, 0x10,  // 191 '�'
    0x03, 0x18, 0x0d, 0x1a,  // 192 '�'
    0x03, 0x1a, 0x0d, 0x18,  // 193 '�'
    0x03, 0x19, 0x0d, 0x19,  // 194 '�'
    0x03, 0x1a, 0x0f, 0x19,  // 195 '�'
    0x03, 0x1d, 0x0a, 0x1d,  // 196 '�'
    0x03, 0x1f, 0x0b, 0x1c,  // 197 '�'
    0x03, 0x1e, 0x1f, 0x15,  // 198 '�'
    0x03, 0x06, 0x29, 0x19,  // 199 '�'
    0x03, 0x1c, 0x1d, 0x16,  // 200 '�'
    0x03, 0x1e, 0x1d, 0x14,  // 201 '�'
    0x03, 0x1d, 0x1d, 0x15,  // 202 '�'
    0x03, 0x1d, 0x1c, 0x15,  // 203 '�'
    0x03, 0x14, 0x1d, 0x16,  // 204 '�'
    0x03, 0x16, 0x1d, 0x14,  // 205 '�'
    0x03, 0x15, 0x1d, 0x15,  // 206 '�'
    0x03, 0x15, 0x1c, 0x15,  // 207 '�'
    0x03, 0x1f, 0x15, 0x0e,  // 208 '�'
    0x03, 0x1d, 0x0b, 0x1e,  // 209 '�'
    0x03, 0x1c, 0x15, 0x1e,  // 210 '�'
    0x03, 0x1e, 0x15, 0x1c,  // 211 '�'
    0x03, 0x1d, 0x15, 0x1d,  // 212 '�'
    0x03, 0x1d, 0x17, 0x1e,  // 213 '�'
    0x03, 0x1d, 0x14, 0x1d,  // 214 '�'
    0x03, 0x0a, 0x04, 0x0a,  // 215 '�'
    0x03, 0x1e, 0x15, 0x0f,  // 216 '�'
    0x03, 0x1d, 0x12, 0x1c,  // 217 '�'
    0x03, 0x1c, 0x12, 0x1d,  // 218 '�'
    0x03, 0x1d, 0x11, 0x1d,  // 219 '�'
    0x03, 0x1d, 0x10, 0x1d,  // 220 '�'
    0x03, 0x0c, 0x1a, 0x0d,  // 221 '�'
    0x03, 0x1f, 0x0a, 0x0e,  // 222 '�'
    0x03, 0x3e, 0x15, 0x0b,  // 223 '�'
    0x03, 0x18, 0x15, 0x1e,  // 224 '�'
    0x03, 0x1a, 0x15, 0x1c,  // 225 '�'
    0x03, 0x19, 0x15, 0x1d,  // 226 '�'
    0x03, 0x1a, 0x17, 0x1d,  // 227 '�'
    0x03, 0x19, 0x14, 0x1d,  // 228 '�'
    0x03, 0x18, 0x17, 0x1f,  // 229 '�'
    0x03, 0x1c, 0x1e, 0x0e,  // 230 '�'
    0x03, 0x04, 0x2a, 0x1a,  // 231 '�'
    0x03, 0x08, 0x1d, 0x1e,  // 232 '�'
    0x03, 0x0a, 0x1d, 0x1c,  // 233 '�'
    0x03, 0x09, 0x1d, 0x1d,  // 234 '�'
    0x03, 0x09, 0x1c, 0x1d,  // 235 '�'
    0x02, 0x1d, 0x02, 0x00,  // 236 '�'
    0x02, 0x02, 0x1d, 0x00,  // 237 '�'
    0x03, 0x01, 0x1d, 0x01,  // 238 '�'
    0x03, 0x01, 0x1c, 0x01,  // 239 '�'
    0x03, 0x0a, 0x17, 0x1d,  // 240 '�'
    0x03, 0x1d, 0x07, 0x1a,  // 241 '�'
    0x03, 0x08, 0x15, 0x0a,  // 242 '�'
    0x03, 0x0a, 0x15, 0x08,  // 243 '�'
    0x03, 0x09, 0x15, 0x09,  // 244 '�'
    0x03, 0x09, 0x17, 0x0a,  // 245 '�'
    0x03, 0x09, 0x14, 0x09,  // 246 '�'
    0x03, 0x04, 0x15, 0x04,  // 247 '�'
    0x03, 0x1c, 0x16, 0x0e,  // 248 '�'
    0x03, 0x0d, 0x12, 0x1c,  // 249 '�'
    0x03, 0x0c, 0x12, 0x1d,  // 250 '�'
    0x03, 0x0d, 0x11, 0x1d,  // 251 '�'
    0x03, 0x0d, 0x10, 0x1d,  // 252 '�'
    0x03, 0x04, 0x2a, 0x1d,  // 253 '�'
    0x03, 0x3e, 0x14, 0x08,  // 254 '�'
    0x03, 0x05, 0x28, 0x1d,  // 255 '�'

};
static const unsigned char* font3x5 = tom_thumb;
#ifdef __cplusplus
} // namespace Fonts
#endif
#endif // FRAMEBUFFER_FONTS_TOM_THUMB_H_