/*	ASCII AND EBCDIC CHARACTER TYPES 
 *	copyright (c) 1984, 1985, 1986 by Whitesmiths, Ltd.
 */
#include <wslxa.h>
#include <baseli.h>
#include <ctype.h>

#ifdef _EBCDIC

RDONLY UTINY _ctype[257] = 
	{
	/*  -1 ~0x0 ~000 EOF	*/ 0,
	/*   0 0x00 0000 nul	*/ _C,
	/*   1 0x01 0001 soh	*/ _C,
	/*   2 0x02 0002 stx	*/ _C,
	/*   3 0x03 0003 etx	*/ _C,
	/*   4 0x04 0004 sel	*/ _C,
	/*   5 0x05 0005 ht '\t'*/ _S | _C,
	/*   6 0x06 0006 rnl	*/ _C,
	/*   7 0x07 0007 del	*/ _C,
	/*   8 0x08 0010 ge 	*/ _C,
	/*   9 0x09 0011 sps	*/ _C,
	/*  10 0x0a 0012 rpt	*/ _C,
	/*  11 0x0b 0013 vt '\v'*/ _S | _C,
	/*  12 0x0c 0014 ff '\f'*/ _S | _C,
	/*  13 0x0d 0015 cr '\r'*/ _S | _C,
	/*  14 0x0e 0016 so 	*/ _C,
	/*  15 0x0f 0017 si 	*/ _C,
	/*  16 0x10 0020 dle	*/ _C,
	/*  17 0x11 0021 dc1	*/ _C,
	/*  18 0x12 0022 dc2	*/ _C,
	/*  19 0x13 0023 dc3	*/ _C,
	/*  20 0x14 0024 res/enp*/ _C,
	/*  21 0x15 0025 nl 	*/ _C,
	/*  22 0x16 0026 bs 	*/ _C,
	/*  23 0x17 0027 poc	*/ _C,
	/*  24 0x18 0030 can	*/ _C,
	/*  25 0x19 0031 em 	*/ _C,
	/*  26 0x1a 0032 ubs	*/ _C,
	/*  27 0x1b 0033 cu1	*/ _C,
	/*  28 0x1c 0034 ifs	*/ _C,
	/*  29 0x1d 0035 igs	*/ _C,
	/*  30 0x1e 0036 irs	*/ _C,
	/*  31 0x1f 0037 ius/itb*/ _C,
	/*  32 0x20 0040 ds 	*/ _C,
	/*  33 0x21 0041 sos	*/ _C,
	/*  34 0x22 0042 fs 	*/ _C,
	/*  35 0x23 0043 wus	*/ _C,
	/*  36 0x24 0044 byp/inp*/ _C,
	/*  37 0x25 0045 lf '\n'*/ _S | _C,
	/*  38 0x26 0046 etb	*/ _C,
	/*  39 0x27 0047 esc	*/ _C,
	/*  40 0x28 0050 sa 	*/ _C,
	/*  41 0x29 0051    	*/  0,
	/*  42 0x2a 0052 sm/sw	*/ _C,
	/*  43 0x2b 0053 csp	*/ _C,
	/*  44 0x2c 0054 mfa	*/ _C,
	/*  45 0x2d 0055 enq	*/ _C,
	/*  46 0x2e 0056 ack	*/ _C,
	/*  47 0x2f 0057 bel	*/ _C,
	/*  48 0x30 0060    	*/  0,
	/*  49 0x31 0061    	*/  0,
	/*  50 0x32 0062 syn	*/ _C,
	/*  51 0x33 0063 ir 	*/ _C,
	/*  52 0x34 0064 pp 	*/ _C,
	/*  53 0x35 0065 trn	*/ _C,
	/*  54 0x36 0066 nbs	*/ _C,
	/*  55 0x37 0067 eot	*/ _C,
	/*  56 0x38 0070 sbs	*/ _C,
	/*  57 0x39 0071 it 	*/ _C,
	/*  58 0x3a 0072 rff	*/ _C,
	/*  59 0x3b 0073 cu3	*/ _C,
	/*  60 0x3c 0074 dc4	*/ _C,
	/*  61 0x3d 0075 nak	*/ _C,
	/*  62 0x3e 0076    	*/ 0,
	/*  63 0x3f 0077 sub	*/ _C,
	/*  64 0x40 0100 ' '	*/ _SP,
	/*  65 0x41 0101    	*/ 0,
	/*  66 0x42 0102    	*/ 0,
	/*  67 0x43 0103    	*/ 0,
	/*  68 0x44 0104    	*/ 0,
	/*  69 0x45 0105    	*/ 0,
	/*  70 0x46 0106    	*/ 0,
	/*  71 0x47 0107    	*/ 0,
	/*  72 0x48 0110    	*/ 0,
	/*  73 0x49 0111    	*/ 0,
	/*  74 0x4a 0112    	*/ _P,
	/*  75 0x4b 0113 '.'	*/ _P,
	/*  76 0x4c 0114 '<'	*/ _P,
	/*  77 0x4d 0115 '('	*/ _P,
	/*  78 0x4e 0116 '+'	*/ _P,
	/*  79 0x4f 0117 '|'	*/ _P,
	/*  80 0x50 0120 '&'	*/ _P,
	/*  81 0x51 0121    	*/ 0,
	/*  82 0x52 0122    	*/ 0,
	/*  83 0x53 0123    	*/ 0,
	/*  84 0x54 0124    	*/ 0,
	/*  85 0x55 0125    	*/ 0,
	/*  86 0x56 0126    	*/ 0,
	/*  87 0x57 0127    	*/ 0,
	/*  88 0x58 0130    	*/ 0,
	/*  89 0x59 0131    	*/ 0,
	/*  90 0x5a 0132 '!'	*/ _P,
	/*  91 0x5b 0133 '$'	*/ _P,
	/*  92 0x5c 0134 '*'	*/ _P,
	/*  93 0x5d 0135 ')'	*/ _P,
	/*  94 0x5e 0136 ';'	*/ _P,
	/*  95 0x5f 0137 '^'	*/ _P,
	/*  96 0x60 0140 '-'	*/ _P,
	/*  97 0x61 0141 '/'	*/ _P,
	/*  98 0x62 0142    	*/ 0,
	/*  99 0x63 0143    	*/ 0,
	/* 100 0x64 0144    	*/ 0,
	/* 101 0x65 0145    	*/ 0,
	/* 102 0x66 0146    	*/ 0,
	/* 103 0x67 0147    	*/ 0,
	/* 104 0x68 0150    	*/ 0,
	/* 105 0x69 0151    	*/ 0,
	/* 106 0x6a 0152    	*/ _P,
	/* 107 0x6b 0153 ','	*/ _P,
	/* 108 0x6c 0154 '%'	*/ _P,
	/* 109 0x6d 0155 '_'	*/ _P,
	/* 110 0x6e 0156 '>'	*/ _P,
	/* 111 0x6f 0157 '?'	*/ _P,
	/* 112 0x70 0160    	*/ 0,
	/* 113 0x71 0161    	*/ 0,
	/* 114 0x72 0162    	*/ 0,
	/* 115 0x73 0163    	*/ 0,
	/* 116 0x74 0164    	*/ 0,
	/* 117 0x75 0165    	*/ 0,
	/* 118 0x76 0166    	*/ 0,
	/* 119 0x77 0167    	*/ 0,
	/* 120 0x78 0170    	*/ 0,
	/* 121 0x79 0171 '`'	*/ _P,
	/* 122 0x7a 0172 ':'	*/ _P,
	/* 123 0x7b 0173 '#'	*/ _P,
	/* 124 0x7c 0174 '@'	*/ _P,
	/* 125 0x7d 0175 '''	*/ _P,
	/* 126 0x7e 0176 '='	*/ _P,
	/* 127 0x7f 0177 '"'	*/ _P,
	/* 128 0x80 0200    	*/ 0,
	/* 129 0x81 0201 'a'	*/ _LC | _X,
	/* 130 0x82 0202 'b'	*/ _LC | _X,
	/* 131 0x83 0203 'c'	*/ _LC | _X,
	/* 132 0x84 0204 'd'	*/ _LC | _X,
	/* 133 0x85 0205 'e'	*/ _LC | _X,
	/* 134 0x86 0206 'f'	*/ _LC | _X,
	/* 135 0x87 0207 'g'	*/ _LC,
	/* 136 0x88 0210 'h'	*/ _LC,
	/* 137 0x89 0211 'i'	*/ _LC,
	/* 138 0x8a 0212    	*/ 0,
	/* 139 0x8b 0213    	*/ 0,
	/* 140 0x8c 0214    	*/ 0,
	/* 141 0x8d 0215    	*/ 0,
	/* 142 0x8e 0216    	*/ 0,
	/* 143 0x8f 0217    	*/ 0,
	/* 144 0x90 0220    	*/ 0,
	/* 145 0x91 0221 'j'	*/ _LC,
	/* 146 0x92 0222 'k'	*/ _LC,
	/* 147 0x93 0223 'l'	*/ _LC,
	/* 148 0x94 0224 'm'	*/ _LC,
	/* 149 0x95 0225 'n'	*/ _LC,
	/* 150 0x96 0226 'o'	*/ _LC,
	/* 151 0x97 0227 'p'	*/ _LC,
	/* 152 0x98 0230 'q'	*/ _LC,
	/* 153 0x99 0231 'r'	*/ _LC,
	/* 154 0x9a 0232    	*/ 0,
	/* 155 0x9b 0233    	*/ 0,
	/* 156 0x9c 0234    	*/ 0,
	/* 157 0x9d 0235    	*/ 0,
	/* 158 0x9e 0236    	*/ 0,
	/* 159 0x9f 0237    	*/ 0,
	/* 160 0xa0 0240    	*/ 0,
	/* 161 0xa1 0241 '~'	*/ _P,
	/* 162 0xa2 0242 's'	*/ _LC,
	/* 163 0xa3 0243 't'	*/ _LC,
	/* 164 0xa4 0244 'u'	*/ _LC,
	/* 165 0xa5 0245 'v'	*/ _LC,
	/* 166 0xa6 0246 'w'	*/ _LC,
	/* 167 0xa7 0247 'x'	*/ _LC,
	/* 168 0xa8 0250 'y'	*/ _LC,
	/* 169 0xa9 0251 'z'	*/ _LC,
	/* 170 0xaa 0252    	*/ 0,
	/* 171 0xab 0253    	*/ 0,
	/* 172 0xac 0254    	*/ 0,
	/* 173 0xad 0255 '['	*/ _P,
	/* 174 0xae 0256    	*/ 0,
	/* 175 0xaf 0257    	*/ 0,
	/* 176 0xb0 0260    	*/ 0,
	/* 177 0xb1 0261    	*/ 0,
	/* 178 0xb2 0262    	*/ 0,
	/* 179 0xb3 0263    	*/ 0,
	/* 180 0xb4 0264    	*/ 0,
	/* 181 0xb5 0265    	*/ 0,
	/* 182 0xb6 0266    	*/ 0,
	/* 183 0xb7 0267    	*/ 0,
	/* 184 0xb8 0270    	*/ 0,
	/* 185 0xb9 0271    	*/ 0,
	/* 186 0xba 0272    	*/ 0,
	/* 187 0xbb 0273    	*/ 0,
	/* 188 0xbc 0274    	*/ 0,
	/* 189 0xbd 0275 ']'	*/ _P,
	/* 190 0xbe 0276    	*/ 0,
	/* 191 0xbf 0277    	*/ 0,
	/* 192 0xc0 0300 '{'	*/ _P,
	/* 193 0xc1 0301 'A'	*/ _UC | _X,
	/* 194 0xc2 0302 'B'	*/ _UC | _X,
	/* 195 0xc3 0303 'C'	*/ _UC | _X,
	/* 196 0xc4 0304 'D'	*/ _UC | _X,
	/* 197 0xc5 0305 'E'	*/ _UC | _X,
	/* 198 0xc6 0306 'F'	*/ _UC | _X,
	/* 199 0xc7 0307 'G'	*/ _UC,
	/* 200 0xc8 0310 'H'	*/ _UC,
	/* 201 0xc9 0311 'I'	*/ _UC,
	/* 202 0xca 0312    	*/ 0,
	/* 203 0xcb 0313    	*/ 0,
	/* 204 0xcc 0314    	*/ 0,
	/* 205 0xcd 0315    	*/ 0,
	/* 206 0xce 0316    	*/ 0,
	/* 207 0xcf 0317    	*/ 0,
	/* 208 0xd0 0320 '}'	*/ _P,
	/* 209 0xd1 0321 'J'	*/ _UC,
	/* 210 0xd2 0322 'K'	*/ _UC,
	/* 211 0xd3 0323 'L'	*/ _UC,
	/* 212 0xd4 0324 'M'	*/ _UC,
	/* 213 0xd5 0325 'N'	*/ _UC,
	/* 214 0xd6 0326 'O'	*/ _UC,
	/* 215 0xd7 0327 'P'	*/ _UC,
	/* 216 0xd8 0330 'Q'	*/ _UC,
	/* 217 0xd9 0331 'R'	*/ _UC,
	/* 218 0xda 0332    	*/ 0,
	/* 219 0xdb 0333    	*/ 0,
	/* 220 0xdc 0334    	*/ 0,
	/* 221 0xdd 0335    	*/ 0,
	/* 222 0xde 0336    	*/ 0,
	/* 223 0xdf 0337    	*/ 0,
	/* 224 0xe0 0340 '\'	*/ _P,
	/* 225 0xe1 0341    	*/ 0,
	/* 226 0xe2 0342 'S'	*/ _UC,
	/* 227 0xe3 0343 'T'	*/ _UC,
	/* 228 0xe4 0344 'U'	*/ _UC,
	/* 229 0xe5 0345 'V'	*/ _UC,
	/* 230 0xe6 0346 'W'	*/ _UC,
	/* 231 0xe7 0347 'X'	*/ _UC,
	/* 232 0xe8 0350 'Y'	*/ _UC,
	/* 233 0xe9 0351 'Z'	*/ _UC,
	/* 234 0xea 0352    	*/ 0,
	/* 235 0xeb 0353    	*/ 0,
	/* 236 0xec 0354    	*/ 0,
	/* 237 0xed 0355    	*/ 0,
	/* 238 0xee 0356    	*/ 0,
	/* 239 0xef 0357    	*/ 0,
	/* 240 0xf0 0360 '0'	*/ _D,
	/* 241 0xf1 0361 '1'	*/ _D,
	/* 242 0xf2 0362 '2'	*/ _D,
	/* 243 0xf3 0363 '3'	*/ _D,
	/* 244 0xf4 0364 '4'	*/ _D,
	/* 245 0xf5 0365 '5'	*/ _D,
	/* 246 0xf6 0366 '6'	*/ _D,
	/* 247 0xf7 0367 '7'	*/ _D,
	/* 248 0xf8 0370 '8'	*/ _D,
	/* 249 0xf9 0371 '9'	*/ _D,
	/* 250 0xfa 0372    	*/ 0,
	/* 251 0xfb 0373    	*/ 0,
	/* 252 0xfc 0374    	*/ 0,
	/* 253 0xfd 0375    	*/ 0,
	/* 254 0xfe 0376    	*/ 0,
	/* 255 0xff 0377 eo 	*/ 0
	};

#else	/* ASCII */

RDONLY UTINY _ctype[257] = 
	{
	/*  -1 ~0x0 ~000    	*/ 0,
	/*   0 0x00 0000 nul	*/ _C,
	/*   1 0x01 0001 soh	*/ _C,
	/*   2 0x02 0002 stx	*/ _C,
	/*   3 0x03 0003 etx	*/ _C,
	/*   4 0x04 0004 eot	*/ _C,
	/*   5 0x05 0005 enq	*/ _C,
	/*   6 0x06 0006 ack	*/ _C,
	/*   7 0x07 0007 bel	*/ _C,
	/*   8 0x08 0010 bs 	*/ _C,
	/*   9 0x09 0011 '\t'	*/ _S | _C,
	/*  10 0x0a 0012 '\n'	*/ _S | _C,
	/*  11 0x0b 0013 '\v'	*/ _S | _C,
	/*  12 0x0c 0014 '\f'	*/ _S | _C,
	/*  13 0x0d 0015 '\r'	*/ _S | _C,
	/*  14 0x0e 0016 so 	*/ _C,
	/*  15 0x0f 0017 si 	*/ _C,
	/*  16 0x10 0020 dle	*/ _C,
	/*  17 0x11 0021 dc1	*/ _C,
	/*  18 0x12 0022 dc2	*/ _C,
	/*  19 0x13 0023 dc3	*/ _C,
	/*  20 0x14 0024 dc4	*/ _C,
	/*  21 0x15 0025 nak	*/ _C,
	/*  22 0x16 0026 syn	*/ _C,
	/*  23 0x17 0027 etb	*/ _C,
	/*  24 0x18 0030 can	*/ _C,
	/*  25 0x19 0031 em 	*/ _C,
	/*  26 0x1a 0032 sub	*/ _C,
	/*  27 0x1b 0033 esc	*/ _C,
	/*  28 0x1c 0034 fs 	*/ _C,
	/*  29 0x1d 0035 gs 	*/ _C,
	/*  30 0x1e 0036 rs 	*/ _C,
	/*  31 0x1f 0037 us 	*/ _C,
	/*  32 0x20 0040 ' '	*/ _SP,
	/*  33 0x21 0041 '!'	*/ _P,
	/*  34 0x22 0042 '"'	*/ _P,
	/*  35 0x23 0043 '#'	*/ _P,
	/*  36 0x24 0044 '$'	*/ _P,
	/*  37 0x25 0045 '%'	*/ _P,
	/*  38 0x26 0046 '&'	*/ _P,
	/*  39 0x27 0047 '''	*/ _P,
	/*  40 0x28 0050 '('	*/ _P,
	/*  41 0x29 0051 ')'	*/ _P,
	/*  42 0x2a 0052 '*'	*/ _P,
	/*  43 0x2b 0053 '+'	*/ _P,
	/*  44 0x2c 0054 ','	*/ _P,
	/*  45 0x2d 0055 '-'	*/ _P,
	/*  46 0x2e 0056 '.'	*/ _P,
	/*  47 0x2f 0057 '/'	*/ _P,
	/*  48 0x30 0060 '0'	*/ _D,
	/*  49 0x31 0061 '1'	*/ _D,
	/*  50 0x32 0062 '2'	*/ _D,
	/*  51 0x33 0063 '3'	*/ _D,
	/*  52 0x34 0064 '4'	*/ _D,
	/*  53 0x35 0065 '5'	*/ _D,
	/*  54 0x36 0066 '6'	*/ _D,
	/*  55 0x37 0067 '7'	*/ _D,
	/*  56 0x38 0070 '8'	*/ _D,
	/*  57 0x39 0071 '9'	*/ _D,
	/*  58 0x3a 0072 ':'	*/ _P,
	/*  59 0x3b 0073 ';'	*/ _P,
	/*  60 0x3c 0074 '<'	*/ _P,
	/*  61 0x3d 0075 '='	*/ _P,
	/*  62 0x3e 0076 '>'	*/ _P,
	/*  63 0x3f 0077 '?'	*/ _P,
	/*  64 0x40 0100 '@'	*/ _P,
	/*  65 0x41 0101 'A'	*/ _UC | _X,
	/*  66 0x42 0102 'B'	*/ _UC | _X,
	/*  67 0x43 0103 'C'	*/ _UC | _X,
	/*  68 0x44 0104 'D'	*/ _UC | _X,
	/*  69 0x45 0105 'E'	*/ _UC | _X,
	/*  70 0x46 0106 'F'	*/ _UC | _X,
	/*  71 0x47 0107 'G'	*/ _UC,
	/*  72 0x48 0110 'H'	*/ _UC,
	/*  73 0x49 0111 'I'	*/ _UC,
	/*  74 0x4a 0112 'J'	*/ _UC,
	/*  75 0x4b 0113 'K'	*/ _UC,
	/*  76 0x4c 0114 'L'	*/ _UC,
	/*  77 0x4d 0115 'M'	*/ _UC,
	/*  78 0x4e 0116 'N'	*/ _UC,
	/*  79 0x4f 0117 'O'	*/ _UC,
	/*  80 0x50 0120 'P'	*/ _UC,
	/*  81 0x51 0121 'Q'	*/ _UC,
	/*  82 0x52 0122 'R'	*/ _UC,
	/*  83 0x53 0123 'S'	*/ _UC,
	/*  84 0x54 0124 'T'	*/ _UC,
	/*  85 0x55 0125 'U'	*/ _UC,
	/*  86 0x56 0126 'V'	*/ _UC,
	/*  87 0x57 0127 'W'	*/ _UC,
	/*  88 0x58 0130 'X'	*/ _UC,
	/*  89 0x59 0131 'Y'	*/ _UC,
	/*  90 0x5a 0132 'Z'	*/ _UC,
	/*  91 0x5b 0133 '['	*/ _P,
	/*  92 0x5c 0134 '\'	*/ _P,
	/*  93 0x5d 0135 ']'	*/ _P,
	/*  94 0x5e 0136 '^'	*/ _P,
	/*  95 0x5f 0137 '_'	*/ _P,
	/*  96 0x60 0140 '`'	*/ _P,
	/*  97 0x61 0141 'a'	*/ _LC | _X,
	/*  98 0x62 0142 'b'	*/ _LC | _X,
	/*  99 0x63 0143 'c'	*/ _LC | _X,
	/* 100 0x64 0144 'd'	*/ _LC | _X,
	/* 101 0x65 0145 'e'	*/ _LC | _X,
	/* 102 0x66 0146 'f'	*/ _LC | _X,
	/* 103 0x67 0147 'g'	*/ _LC,
	/* 104 0x68 0150 'h'	*/ _LC,
	/* 105 0x69 0151 'i'	*/ _LC,
	/* 106 0x6a 0152 'j'	*/ _LC,
	/* 107 0x6b 0153 'k'	*/ _LC,
	/* 108 0x6c 0154 'l'	*/ _LC,
	/* 109 0x6d 0155 'm'	*/ _LC,
	/* 110 0x6e 0156 'n'	*/ _LC,
	/* 111 0x6f 0157 'o'	*/ _LC,
	/* 112 0x70 0160 'p'	*/ _LC,
	/* 113 0x71 0161 'q'	*/ _LC,
	/* 114 0x72 0162 'r'	*/ _LC,
	/* 115 0x73 0163 's'	*/ _LC,
	/* 116 0x74 0164 't'	*/ _LC,
	/* 117 0x75 0165 'u'	*/ _LC,
	/* 118 0x76 0166 'v'	*/ _LC,
	/* 119 0x77 0167 'w'	*/ _LC,
	/* 120 0x78 0170 'x'	*/ _LC,
	/* 121 0x79 0171 'y'	*/ _LC,
	/* 122 0x7a 0172 'z'	*/ _LC,
	/* 123 0x7b 0173 '{'	*/ _P,
	/* 124 0x7c 0174 '|'	*/ _P,
	/* 125 0x7d 0175 '}'	*/ _P,
	/* 126 0x7e 0176 '~'	*/ _P,
	/* 127 0x7f 0177 del	*/ _C,
	/* 128 0x80 0200 TO 255 0xff 0377 iswhite */
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	};

#endif
