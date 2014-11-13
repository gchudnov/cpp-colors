#pragma once

namespace colors {
  namespace x11 {

    template<typename CharT>
    struct basic_named_color;

    template<>
    struct basic_named_color<char> {
      static const char* const pink() {
        return "Pink";
      }

      static const char* const light_pink() {
        return "LightPink";
      }

      static const char* const hot_pink() {
        return "HotPink";
      }

      static const char* const deep_pink() {
        return "DeepPink";
      }

      static const char* const pale_violet_red() {
        return "PaleVioletRed";
      }

      static const char* const medium_violet_red() {
        return "MediumVioletRed";
      }

      static const char* const light_salmon() {
        return "LightSalmon";
      }

      static const char* const salmon() {
        return "Salmon";
      }

      static const char* const dark_salmon() {
        return "DarkSalmon";
      }

      static const char* const light_coral() {
        return "LightCoral";
      }

      static const char* const indian_red() {
        return "IndianRed";
      }

      static const char* const crimson() {
        return "Crimson";
      }

      static const char* const fire_brick() {
        return "FireBrick";
      }

      static const char* const dark_red() {
        return "DarkRed";
      }

      static const char* const red() {
        return "Red";
      }

      static const char* const orange_red() {
        return "OrangeRed";
      }

      static const char* const tomato() {
        return "Tomato";
      }

      static const char* const coral() {
        return "Coral";
      }

      static const char* const dark_orange() {
        return "DarkOrange";
      }

      static const char* const orange() {
        return "Orange";
      }

      static const char* const yellow() {
        return "Yellow";
      }

      static const char* const light_yellow() {
        return "LightYellow";
      }

      static const char* const lemon_chiffon() {
        return "LemonChiffon";
      }

      static const char* const light_goldenrod_yellow() {
        return "LightGoldenrodYellow";
      }

      static const char* const papaya_whip() {
        return "PapayaWhip";
      }

      static const char* const moccasin() {
        return "Moccasin";
      }

      static const char* const peach_puff() {
        return "PeachPuff";
      }

      static const char* const pale_goldenrod() {
        return "PaleGoldenrod";
      }

      static const char* const khaki() {
        return "Khaki";
      }

      static const char* const dark_khaki() {
        return "DarkKhaki";
      }

      static const char* const gold() {
        return "Gold";
      }

      static const char* const cornsilk() {
        return "Cornsilk";
      }

      static const char* const blanched_almond() {
        return "BlanchedAlmond";
      }

      static const char* const bisque() {
        return "Bisque";
      }

      static const char* const navajo_white() {
        return "NavajoWhite";
      }

      static const char* const wheat() {
        return "Wheat";
      }

      static const char* const burly_wood() {
        return "BurlyWood";
      }

      static const char* const tan() {
        return "Tan";
      }

      static const char* const rosy_brown() {
        return "RosyBrown";
      }

      static const char* const sandy_brown() {
        return "SandyBrown";
      }

      static const char* const goldenrod() {
        return "Goldenrod";
      }

      static const char* const dark_goldenrod() {
        return "DarkGoldenrod";
      }

      static const char* const peru() {
        return "Peru";
      }

      static const char* const chocolate() {
        return "Chocolate";
      }

      static const char* const saddle_brown() {
        return "SaddleBrown";
      }

      static const char* const sienna() {
        return "Sienna";
      }

      static const char* const brown() {
        return "Brown";
      }

      static const char* const maroon() {
        return "Maroon";
      }

      static const char* const dark_olive_green() {
        return "DarkOliveGreen";
      }

      static const char* const olive() {
        return "Olive";
      }

      static const char* const olive_drab() {
        return "OliveDrab";
      }

      static const char* const yellow_green() {
        return "YellowGreen";
      }

      static const char* const lime_green() {
        return "LimeGreen";
      }

      static const char* const lime() {
        return "Lime";
      }

      static const char* const lawn_green() {
        return "LawnGreen";
      }

      static const char* const chartreuse() {
        return "Chartreuse";
      }

      static const char* const green_yellow() {
        return "GreenYellow";
      }

      static const char* const spring_green() {
        return "SpringGreen";
      }
//
//      static const char* const XXX() {
//        return "XXX";
//      }
//
//      static const char* const XXX() {
//        return "XXX";
//      }

//MediumSpringGreen	00 FA 9A	  0 250 154
//LightGreen	90 EE 90	144 238 144
//PaleGreen	98 FB 98	152 251 152
//DarkSeaGreen	8F BC 8F	143 188 143
//MediumSeaGreen	3C B3 71	 60 179 113
//SeaGreen	2E 8B 57	 46 139  87
//ForestGreen	22 8B 22	 34 139  34
//Green	00 80 00	  0 128   0
//DarkGreen	00 64 00	  0 100   0
//Cyan colors
//MediumAquamarine	66 CD AA	102 205 170
//Aqua	00 FF FF	  0 255 255
//Cyan	00 FF FF	  0 255 255
//LightCyan	E0 FF FF	224 255 255
//PaleTurquoise	AF EE EE	175 238 238
//Aquamarine	7F FF D4	127 255 212
//Turquoise	40 E0 D0	 64 224 208
//MediumTurquoise	48 D1 CC	 72 209 204
//DarkTurquoise	00 CE D1	  0 206 209
//LightSeaGreen	20 B2 AA	 32 178 170
//CadetBlue	5F 9E A0	 95 158 160
//DarkCyan	00 8B 8B	  0 139 139
//Teal	00 80 80	  0 128 128
//Blue colors
//LightSteelBlue	B0 C4 DE	176 196 222
//PowderBlue	B0 E0 E6	176 224 230
//LightBlue	AD D8 E6	173 216 230
//SkyBlue	87 CE EB	135 206 235
//LightSkyBlue	87 CE FA	135 206 250
//DeepSkyBlue	00 BF FF	  0 191 255
//DodgerBlue	1E 90 FF	 30 144 255
//CornflowerBlue	64 95 ED	100 149 237
//SteelBlue	46 82 B4	 70 130 180
//RoyalBlue	41 69 E1	 65 105 225
//Blue	00 00 FF	  0   0 255
//MediumBlue	00 00 CD	  0   0 205
//DarkBlue	00 00 8B	  0   0 139
//Navy	00 00 80	  0   0 128
//MidnightBlue	19 19 70	 25  25 112
//
//Purple colors
//Lavender	E6 E6 FA	230 230 250
//Thistle	D8 BF D8	216 191 216
//Plum	DD A0 DD	221 160 221
//Violet	EE 82 EE	238 130 238
//Orchid	DA 70 D6	218 112 214
//Fuchsia	FF 00 FF	255   0 255
//Magenta	FF 00 FF	255   0 255
//MediumOrchid	BA 55 D3	186  85 211
//MediumPurple	93 70 DB	147 112 219
//BlueViolet	8A 2B E2	138  43 226
//DarkViolet	94 00 D3	148   0 211
//DarkOrchid	99 32 CC	153  50 204
//DarkMagenta	8B 00 8B	139   0 139
//Purple	80 00 80	128   0 128
//Indigo	4B 00 82	 75   0 130
//DarkSlateBlue	48 3D 8B	 72  61 139
//SlateBlue	6A 5A CD	106  90 205
//MediumSlateBlue	7B 68 EE	123 104 238
//White colors
//White	FF FF FF	255 255 255
//Snow	FF FA FA	255 250 250
//Honeydew	F0 FF F0	240 255 240
//MintCream	F5 FF FA	245 255 250
//Azure	F0 FF FF	240 255 255
//AliceBlue	F0 F8 FF	240 248 255
//GhostWhite	F8 F8 FF	248 248 255
//WhiteSmoke	F5 F5 F5	245 245 245
//Seashell	FF F5 EE	255 245 238
//Beige	F5 F5 DC	245 245 220
//OldLace	FD F5 E6	253 245 230
//FloralWhite	FF FA F0	255 250 240
//Ivory	FF FF F0	255 255 240
//AntiqueWhite	FA EB D7	250 235 215
//Linen	FA F0 E6	250 240 230
//LavenderBlush	FF F0 F5	255 240 245
//MistyRose	FF E4 E1	255 228 225
//Gray/Black colors
//Gainsboro	DC DC DC	220 220 220
//LightGrey	D3 D3 D3	211 211 211
//Silver	C0 C0 C0	192 192 192
//DarkGray	A9 A9 A9	169 169 169
//Gray	80 80 80	128 128 128
//DimGray	69 69 69	105 105 105
//LightSlateGray	77 88 99	119 136 153
//SlateGray	70 80 90	112 128 144
//DarkSlateGray	2F 4F 4F	 47  79  79
//Black	00 00 00	  0   0   0
    };

  }
}

//Pink colors
//Pink	FF C0 CB	255 192 203
//LightPink	FF B6 C1	255 182 193
//HotPink	FF 69 B4	255 105 180
//DeepPink	FF 14 93	255  20 147
//PaleVioletRed	DB 70 93	219 112 147
//MediumVioletRed	C7 15 85	199  21 133
//Red colors
//LightSalmon	FF A0 7A	255 160 122
//Salmon	FA 80 72	250 128 114
//DarkSalmon	E9 96 7A	233 150 122
//LightCoral	F0 80 80	240 128 128
//IndianRed	CD 5C 5C	205  92  92
//Crimson	DC 14 3C	220  20  60
//FireBrick	B2 22 22	178  34  34
//DarkRed	8B 00 00	139   0   0
//Red	FF 00 00	255   0   0
//Orange colors
//OrangeRed	FF 45 00	255  69   0
//Tomato	FF 63 47	255  99  71
//Coral	FF 7F 50	255 127  80
//DarkOrange	FF 8C 00	255 140   0
//Orange	FF A5 00	255 165   0
//Yellow colors
//Yellow	FF FF 00	255 255   0
//LightYellow	FF FF E0	255 255 224
//LemonChiffon	FF FA CD	255 250 205
//LightGoldenrodYellow	FA FA D2	250 250 210
//PapayaWhip	FF EF D5	255 239 213
//Moccasin	FF E4 B5	255 228 181
//PeachPuff	FF DA B9	255 218 185
//PaleGoldenrod	EE E8 AA	238 232 170
//Khaki	F0 E6 8C	240 230 140
//DarkKhaki	BD B7 6B	189 183 107
//Gold	FF D7 00	255 215   0
//Brown colors
//Cornsilk	FF F8 DC	255 248 220
//BlanchedAlmond	FF EB CD	255 235 205
//Bisque	FF E4 C4	255 228 196
//NavajoWhite	FF DE AD	255 222 173
//Wheat	F5 DE B3	245 222 179
//BurlyWood	DE B8 87	222 184 135
//Tan	D2 B4 8C	210 180 140
//RosyBrown	BC 8F 8F	188 143 143
//SandyBrown	F4 A4 60	244 164  96
//Goldenrod	DA A5 20	218 165  32
//DarkGoldenrod	B8 86 0B	184 134  11
//Peru	CD 85 3F	205 133  63
//Chocolate	D2 69 1E	210 105  30
//SaddleBrown	8B 45 13	139  69  19
//Sienna	A0 52 2D	160  82  45
//Brown	A5 2A 2A	165  42  42
//Maroon	80 00 00	128   0   0
//
//Green colors
//DarkOliveGreen	55 6B 2F	 85 107  47
//Olive	80 80 00	128 128   0
//OliveDrab	6B 8E 23	107 142  35
//YellowGreen	9A CD 32	154 205  50
//LimeGreen	32 CD 32	 50 205  50
//Lime	00 FF 00	  0 255   0
//LawnGreen	7C FC 00	124 252   0
//Chartreuse	7F FF 00	127 255   0
//GreenYellow	AD FF 2F	173 255  47
//SpringGreen	00 FF 7F	  0 255 127
//MediumSpringGreen	00 FA 9A	  0 250 154
//LightGreen	90 EE 90	144 238 144
//PaleGreen	98 FB 98	152 251 152
//DarkSeaGreen	8F BC 8F	143 188 143
//MediumSeaGreen	3C B3 71	 60 179 113
//SeaGreen	2E 8B 57	 46 139  87
//ForestGreen	22 8B 22	 34 139  34
//Green	00 80 00	  0 128   0
//DarkGreen	00 64 00	  0 100   0
//Cyan colors
//MediumAquamarine	66 CD AA	102 205 170
//Aqua	00 FF FF	  0 255 255
//Cyan	00 FF FF	  0 255 255
//LightCyan	E0 FF FF	224 255 255
//PaleTurquoise	AF EE EE	175 238 238
//Aquamarine	7F FF D4	127 255 212
//Turquoise	40 E0 D0	 64 224 208
//MediumTurquoise	48 D1 CC	 72 209 204
//DarkTurquoise	00 CE D1	  0 206 209
//LightSeaGreen	20 B2 AA	 32 178 170
//CadetBlue	5F 9E A0	 95 158 160
//DarkCyan	00 8B 8B	  0 139 139
//Teal	00 80 80	  0 128 128
//Blue colors
//LightSteelBlue	B0 C4 DE	176 196 222
//PowderBlue	B0 E0 E6	176 224 230
//LightBlue	AD D8 E6	173 216 230
//SkyBlue	87 CE EB	135 206 235
//LightSkyBlue	87 CE FA	135 206 250
//DeepSkyBlue	00 BF FF	  0 191 255
//DodgerBlue	1E 90 FF	 30 144 255
//CornflowerBlue	64 95 ED	100 149 237
//SteelBlue	46 82 B4	 70 130 180
//RoyalBlue	41 69 E1	 65 105 225
//Blue	00 00 FF	  0   0 255
//MediumBlue	00 00 CD	  0   0 205
//DarkBlue	00 00 8B	  0   0 139
//Navy	00 00 80	  0   0 128
//MidnightBlue	19 19 70	 25  25 112
//
//Purple colors
//Lavender	E6 E6 FA	230 230 250
//Thistle	D8 BF D8	216 191 216
//Plum	DD A0 DD	221 160 221
//Violet	EE 82 EE	238 130 238
//Orchid	DA 70 D6	218 112 214
//Fuchsia	FF 00 FF	255   0 255
//Magenta	FF 00 FF	255   0 255
//MediumOrchid	BA 55 D3	186  85 211
//MediumPurple	93 70 DB	147 112 219
//BlueViolet	8A 2B E2	138  43 226
//DarkViolet	94 00 D3	148   0 211
//DarkOrchid	99 32 CC	153  50 204
//DarkMagenta	8B 00 8B	139   0 139
//Purple	80 00 80	128   0 128
//Indigo	4B 00 82	 75   0 130
//DarkSlateBlue	48 3D 8B	 72  61 139
//SlateBlue	6A 5A CD	106  90 205
//MediumSlateBlue	7B 68 EE	123 104 238
//White colors
//White	FF FF FF	255 255 255
//Snow	FF FA FA	255 250 250
//Honeydew	F0 FF F0	240 255 240
//MintCream	F5 FF FA	245 255 250
//Azure	F0 FF FF	240 255 255
//AliceBlue	F0 F8 FF	240 248 255
//GhostWhite	F8 F8 FF	248 248 255
//WhiteSmoke	F5 F5 F5	245 245 245
//Seashell	FF F5 EE	255 245 238
//Beige	F5 F5 DC	245 245 220
//OldLace	FD F5 E6	253 245 230
//FloralWhite	FF FA F0	255 250 240
//Ivory	FF FF F0	255 255 240
//AntiqueWhite	FA EB D7	250 235 215
//Linen	FA F0 E6	250 240 230
//LavenderBlush	FF F0 F5	255 240 245
//MistyRose	FF E4 E1	255 228 225
//Gray/Black colors
//Gainsboro	DC DC DC	220 220 220
//LightGrey	D3 D3 D3	211 211 211
//Silver	C0 C0 C0	192 192 192
//DarkGray	A9 A9 A9	169 169 169
//Gray	80 80 80	128 128 128
//DimGray	69 69 69	105 105 105
//LightSlateGray	77 88 99	119 136 153
//SlateGray	70 80 90	112 128 144
//DarkSlateGray	2F 4F 4F	 47  79  79
//Black	00 00 00	  0   0   0