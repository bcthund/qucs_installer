/* C++ code produced by gperf version 3.1 */
/* Command-line: /usr/local/bin/gperf -I -m 8 gperfapphash.gph  */
/* Computed positions: -k'1-9,11,13,19,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 7 "gperfapphash.gph"
struct appindex { const char * key; int index; };
#include <string.h>

#define TOTAL_KEYWORDS 709
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 21
#define MIN_HASH_VALUE 32
#define MAX_HASH_VALUE 1504
/* maximum key range = 1473, duplicates = 0 */

class gperfapphash
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static struct appindex *get (const char *str, size_t len);
};

inline unsigned int
gperfapphash::hash (const char *str, size_t len)
{
  static unsigned short asso_values[] =
    {
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505,  557, 1505, 1505, 1505,  294,    1, 1505,
      1505, 1505,  863,  771, 1505,  690, 1505, 1111,    2, 1505,
         9,  605, 1505, 1505, 1505, 1505, 1505, 1505,  391, 1505,
      1018,  175,  986,  391, 1505, 1505,  108,   10,    0,    5,
       161,    2, 1505,    2,    0, 1505,   10,   11,  447,    1,
        20, 1505,  178,  155,    8,    0,    3,    1,  133, 1505,
      1505, 1505, 1505, 1505, 1077,   12,    6,    0,  320,   95,
       171,   38,  126,  335,   34,    1,  570,  557,  386,  131,
         0,    0,   12,  517,  121,   24,   21,   99,  205,  143,
       450,  116,    0,  785,    0, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505,
      1505, 1505, 1505, 1505, 1505, 1505, 1505, 1505
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[18]+1)];
      /*FALLTHROUGH*/
      case 18:
      case 17:
      case 16:
      case 15:
      case 14:
      case 13:
        hval += asso_values[static_cast<unsigned char>(str[12]+1)];
      /*FALLTHROUGH*/
      case 12:
      case 11:
        hval += asso_values[static_cast<unsigned char>(str[10])];
      /*FALLTHROUGH*/
      case 10:
      case 9:
        hval += asso_values[static_cast<unsigned char>(str[8])];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[static_cast<unsigned char>(str[7]+2)];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[static_cast<unsigned char>(str[6]+1)];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[static_cast<unsigned char>(str[5])];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[static_cast<unsigned char>(str[4])];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[static_cast<unsigned char>(str[3]+1)];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[static_cast<unsigned char>(str[2])];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[static_cast<unsigned char>(str[1])];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

struct appindex *
gperfapphash::get (const char *str, size_t len)
{
  static struct appindex applist[] =
    {
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 224 "gperfapphash.gph"
      {"tan_D", 		215},
      {"",0}, {"",0}, {"",0},
#line 212 "gperfapphash.gph"
      {"sin_D", 		203},
      {"",0},
#line 226 "gperfapphash.gph"
      {"tan_V", 		217},
      {"",0},
#line 260 "gperfapphash.gph"
      {"tanh_D", 		251},
      {"",0},
#line 214 "gperfapphash.gph"
      {"sin_V", 		205},
      {"",0},
#line 248 "gperfapphash.gph"
      {"sinh_D", 		239},
      {"",0},
#line 262 "gperfapphash.gph"
      {"tanh_V", 		253},
      {"",0}, {"",0}, {"",0},
#line 250 "gperfapphash.gph"
      {"sinh_V", 		241},
      {"",0},
#line 225 "gperfapphash.gph"
      {"tan_C", 		216},
      {"",0}, {"",0},
#line 421 "gperfapphash.gph"
      {"ztoy_MV", 		412},
#line 213 "gperfapphash.gph"
      {"sin_C", 		204},
      {"",0}, {"",0}, {"",0},
#line 261 "gperfapphash.gph"
      {"tanh_C", 		252},
#line 420 "gperfapphash.gph"
      {"ztoy_M", 		411},
      {"",0},
#line 284 "gperfapphash.gph"
      {"ztor_D", 		275},
#line 249 "gperfapphash.gph"
      {"sinh_C", 		240},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 290 "gperfapphash.gph"
      {"ztor_V", 		281},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 415 "gperfapphash.gph"
      {"ztos_MV_D", 		406},
#line 414 "gperfapphash.gph"
      {"ztos_MV", 		405},
      {"",0},
#line 391 "gperfapphash.gph"
      {"stoy_MV_D", 		382},
#line 390 "gperfapphash.gph"
      {"stoy_MV", 		381},
      {"",0},
#line 417 "gperfapphash.gph"
      {"ztos_MV_V", 		408},
#line 410 "gperfapphash.gph"
      {"ztos_M", 		401},
#line 287 "gperfapphash.gph"
      {"ztor_C", 		278},
#line 393 "gperfapphash.gph"
      {"stoy_MV_V", 		384},
#line 386 "gperfapphash.gph"
      {"stoy_M", 		377},
#line 286 "gperfapphash.gph"
      {"ztor_D_C", 		277},
      {"",0}, {"",0},
#line 292 "gperfapphash.gph"
      {"ztor_V_C", 		283},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 412 "gperfapphash.gph"
      {"ztos_M_C", 		403},
#line 416 "gperfapphash.gph"
      {"ztos_MV_C", 		407},
#line 289 "gperfapphash.gph"
      {"ztor_C_C", 		280},
#line 388 "gperfapphash.gph"
      {"stoy_M_C", 		379},
#line 392 "gperfapphash.gph"
      {"stoy_MV_C", 		383},
#line 374 "gperfapphash.gph"
      {"stos_MV_D", 		365},
      {"",0},
#line 375 "gperfapphash.gph"
      {"stos_MV_D_D", 		366},
      {"",0}, {"",0},
#line 383 "gperfapphash.gph"
      {"stos_MV_V_D", 		374},
#line 382 "gperfapphash.gph"
      {"stos_MV_V", 		373},
      {"",0},
#line 377 "gperfapphash.gph"
      {"stos_MV_D_V", 		368},
      {"",0}, {"",0},
#line 385 "gperfapphash.gph"
      {"stos_MV_V_V", 		376},
#line 379 "gperfapphash.gph"
      {"stos_MV_C_D", 		370},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 381 "gperfapphash.gph"
      {"stos_MV_C_V", 		372},
#line 366 "gperfapphash.gph"
      {"stos_M_C", 		357},
#line 378 "gperfapphash.gph"
      {"stos_MV_C", 		369},
      {"",0},
#line 376 "gperfapphash.gph"
      {"stos_MV_D_C", 		367},
#line 367 "gperfapphash.gph"
      {"stos_M_C_D", 		358},
      {"",0},
#line 384 "gperfapphash.gph"
      {"stos_MV_V_C", 		375},
#line 369 "gperfapphash.gph"
      {"stos_M_C_V", 		360},
      {"",0},
#line 230 "gperfapphash.gph"
      {"cot_D", 		221},
#line 167 "gperfapphash.gph"
      {"phase_V", 		158},
#line 165 "gperfapphash.gph"
      {"phase_D", 		156},
#line 218 "gperfapphash.gph"
      {"cos_D", 		209},
#line 380 "gperfapphash.gph"
      {"stos_MV_C_C", 		371},
#line 368 "gperfapphash.gph"
      {"stos_M_C_C", 		359},
#line 232 "gperfapphash.gph"
      {"cot_V", 		223},
#line 166 "gperfapphash.gph"
      {"phase_C", 		157},
#line 266 "gperfapphash.gph"
      {"coth_D", 		257},
#line 220 "gperfapphash.gph"
      {"cos_V", 		211},
      {"",0},
#line 254 "gperfapphash.gph"
      {"cosh_D", 		245},
#line 162 "gperfapphash.gph"
      {"norm_D", 		153},
      {"",0},
#line 268 "gperfapphash.gph"
      {"coth_V", 		259},
      {"",0},
#line 333 "gperfapphash.gph"
      {"min_D", 		324},
#line 256 "gperfapphash.gph"
      {"cosh_V", 		247},
#line 164 "gperfapphash.gph"
      {"norm_V", 		155},
      {"",0},
#line 231 "gperfapphash.gph"
      {"cot_C", 		222},
#line 447 "gperfapphash.gph"
      {"Mu2_MV", 		438},
#line 335 "gperfapphash.gph"
      {"min_V", 		326},
#line 219 "gperfapphash.gph"
      {"cos_C", 		210},
      {"",0},
#line 446 "gperfapphash.gph"
      {"Mu2_M", 		437},
      {"",0}, {"",0},
#line 267 "gperfapphash.gph"
      {"coth_C", 		258},
      {"",0}, {"",0},
#line 255 "gperfapphash.gph"
      {"cosh_C", 		246},
#line 163 "gperfapphash.gph"
      {"norm_C", 		154},
#line 311 "gperfapphash.gph"
      {"rtoy_D", 		302},
      {"",0},
#line 337 "gperfapphash.gph"
      {"min_D_D", 		328},
#line 334 "gperfapphash.gph"
      {"min_C", 		325},
      {"",0}, {"",0},
#line 317 "gperfapphash.gph"
      {"rtoy_V", 		308},
#line 339 "gperfapphash.gph"
      {"min_D_C", 		330},
#line 236 "gperfapphash.gph"
      {"sec_D", 		227},
      {"",0}, {"",0}, {"",0},
#line 338 "gperfapphash.gph"
      {"min_C_D", 		329},
      {"",0},
#line 238 "gperfapphash.gph"
      {"sec_V", 		229},
      {"",0},
#line 272 "gperfapphash.gph"
      {"sech_D", 		263},
#line 340 "gperfapphash.gph"
      {"min_C_C", 		331},
      {"",0},
#line 302 "gperfapphash.gph"
      {"ytor_D", 		293},
#line 314 "gperfapphash.gph"
      {"rtoy_C", 		305},
      {"",0},
#line 274 "gperfapphash.gph"
      {"sech_V", 		265},
#line 313 "gperfapphash.gph"
      {"rtoy_D_C", 		304},
#line 142 "gperfapphash.gph"
      {"imag_D", 		133},
#line 308 "gperfapphash.gph"
      {"ytor_V", 		299},
#line 319 "gperfapphash.gph"
      {"rtoy_V_C", 		310},
      {"",0},
#line 237 "gperfapphash.gph"
      {"sec_C", 		228},
#line 344 "gperfapphash.gph"
      {"prod_D", 		335},
#line 144 "gperfapphash.gph"
      {"imag_V", 		135},
#line 407 "gperfapphash.gph"
      {"ytos_MV_D", 		398},
#line 406 "gperfapphash.gph"
      {"ytos_MV", 		397},
#line 316 "gperfapphash.gph"
      {"rtoy_C_C", 		307},
      {"",0},
#line 346 "gperfapphash.gph"
      {"prod_V", 		337},
#line 273 "gperfapphash.gph"
      {"sech_C", 		264},
#line 409 "gperfapphash.gph"
      {"ytos_MV_V", 		400},
#line 402 "gperfapphash.gph"
      {"ytos_M", 		393},
#line 305 "gperfapphash.gph"
      {"ytor_C", 		296},
#line 146 "gperfapphash.gph"
      {"imag_MV", 		137},
      {"",0},
#line 304 "gperfapphash.gph"
      {"ytor_D_C", 		295},
#line 430 "gperfapphash.gph"
      {"eye_D", 		421},
#line 143 "gperfapphash.gph"
      {"imag_C", 		134},
#line 310 "gperfapphash.gph"
      {"ytor_V_C", 		301},
#line 145 "gperfapphash.gph"
      {"imag_M", 		136},
      {"",0}, {"",0},
#line 345 "gperfapphash.gph"
      {"prod_C", 		336},
#line 404 "gperfapphash.gph"
      {"ytos_M_C", 		395},
#line 408 "gperfapphash.gph"
      {"ytos_MV_C", 		399},
#line 307 "gperfapphash.gph"
      {"ytor_C_C", 		298},
      {"",0},
#line 439 "gperfapphash.gph"
      {"sinc_D", 		430},
#line 413 "gperfapphash.gph"
      {"ztos_M_V", 		404},
#line 130 "gperfapphash.gph"
      {"hypot_C_D", 		121},
#line 132 "gperfapphash.gph"
      {"hypot_V_D", 		123},
#line 389 "gperfapphash.gph"
      {"stoy_M_V", 		380},
#line 501 "gperfapphash.gph"
      {"range_D_D", 		492},
#line 441 "gperfapphash.gph"
      {"sinc_V", 		432},
#line 128 "gperfapphash.gph"
      {"hypot_D_D", 		119},
#line 135 "gperfapphash.gph"
      {"hypot_C_V", 		126},
#line 136 "gperfapphash.gph"
      {"hypot_V_V", 		127},
      {"",0}, {"",0}, {"",0},
#line 133 "gperfapphash.gph"
      {"hypot_D_V", 		124},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 285 "gperfapphash.gph"
      {"ztor_D_D", 		276},
      {"",0},
#line 440 "gperfapphash.gph"
      {"sinc_C", 		431},
#line 291 "gperfapphash.gph"
      {"ztor_V_D", 		282},
#line 129 "gperfapphash.gph"
      {"hypot_C_C", 		120},
#line 134 "gperfapphash.gph"
      {"hypot_V_C", 		125},
      {"",0},
#line 370 "gperfapphash.gph"
      {"stos_M_V", 		361},
#line 411 "gperfapphash.gph"
      {"ztos_M_D", 		402},
#line 131 "gperfapphash.gph"
      {"hypot_D_C", 		122},
#line 288 "gperfapphash.gph"
      {"ztor_C_D", 		279},
#line 387 "gperfapphash.gph"
      {"stoy_M_D", 		378},
      {"",0}, {"",0},
#line 607 "gperfapphash.gph"
      {"vt_V", 		598},
#line 605 "gperfapphash.gph"
      {"vt_D", 		596},
      {"",0}, {"",0},
#line 371 "gperfapphash.gph"
      {"stos_M_V_D", 		362},
      {"",0},
#line 606 "gperfapphash.gph"
      {"vt_C", 		597},
#line 373 "gperfapphash.gph"
      {"stos_M_V_V", 		364},
      {"",0},
#line 542 "gperfapphash.gph"
      {"smooth_C_D", 		533},
#line 704 "gperfapphash.gph"
      {"||_B_B", 		695},
      {"",0},
#line 705 "gperfapphash.gph"
      {"&&_B_B", 		696},
#line 429 "gperfapphash.gph"
      {"det_MV", 		420},
#line 372 "gperfapphash.gph"
      {"stos_M_V_C", 		363},
      {"",0}, {"",0},
#line 428 "gperfapphash.gph"
      {"det_M", 		419},
#line 362 "gperfapphash.gph"
      {"stos_M_D", 		353},
#line 341 "gperfapphash.gph"
      {"sum_D", 		332},
      {"",0},
#line 216 "gperfapphash.gph"
      {"arcsin_C", 		207},
      {"",0}, {"",0}, {"",0},
#line 343 "gperfapphash.gph"
      {"sum_V", 		334},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 363 "gperfapphash.gph"
      {"stos_M_D_D", 		354},
      {"",0}, {"",0},
#line 365 "gperfapphash.gph"
      {"stos_M_D_V", 		356},
      {"",0},
#line 505 "gperfapphash.gph"
      {"ceil_D", 		496},
      {"",0},
#line 342 "gperfapphash.gph"
      {"sum_C", 		333},
      {"",0},
#line 547 "gperfapphash.gph"
      {"rms_D", 		538},
#line 364 "gperfapphash.gph"
      {"stos_M_D_C", 		355},
#line 507 "gperfapphash.gph"
      {"ceil_V", 		498},
#line 488 "gperfapphash.gph"
      {"fft_V", 		479},
      {"",0}, {"",0},
#line 549 "gperfapphash.gph"
      {"rms_V", 		540},
      {"",0}, {"",0},
#line 520 "gperfapphash.gph"
      {"erf_D", 		511},
      {"",0}, {"",0},
#line 191 "gperfapphash.gph"
      {"dB_V", 		182},
#line 189 "gperfapphash.gph"
      {"dB_D", 		180},
      {"",0},
#line 522 "gperfapphash.gph"
      {"erf_V", 		513},
#line 506 "gperfapphash.gph"
      {"ceil_C", 		497},
      {"",0},
#line 190 "gperfapphash.gph"
      {"dB_C", 		181},
      {"",0},
#line 548 "gperfapphash.gph"
      {"rms_C", 		539},
#line 137 "gperfapphash.gph"
      {"real_D", 		128},
      {"",0}, {"",0}, {"",0},
#line 270 "gperfapphash.gph"
      {"arcoth_C", 		261},
      {"",0},
#line 139 "gperfapphash.gph"
      {"real_V", 		130},
#line 258 "gperfapphash.gph"
      {"arcosh_C", 		249},
#line 521 "gperfapphash.gph"
      {"erf_C", 		512},
#line 105 "gperfapphash.gph"
      {"%_D_D", 		96},
      {"",0}, {"",0},
#line 109 "gperfapphash.gph"
      {"%_V_D", 		100},
      {"",0}, {"",0},
#line 110 "gperfapphash.gph"
      {"%_D_V", 		101},
#line 141 "gperfapphash.gph"
      {"real_MV", 		132},
#line 709 "gperfapphash.gph"
      {"srandom_D", 		700},
#line 113 "gperfapphash.gph"
      {"%_V_V", 		104},
#line 107 "gperfapphash.gph"
      {"%_C_D", 		98},
#line 138 "gperfapphash.gph"
      {"real_C", 		129},
#line 312 "gperfapphash.gph"
      {"rtoy_D_D", 		303},
#line 140 "gperfapphash.gph"
      {"real_M", 		131},
#line 405 "gperfapphash.gph"
      {"ytos_M_V", 		396},
#line 318 "gperfapphash.gph"
      {"rtoy_V_D", 		309},
#line 112 "gperfapphash.gph"
      {"%_C_V", 		103},
      {"",0},
#line 490 "gperfapphash.gph"
      {"dft_V", 		481},
      {"",0},
#line 108 "gperfapphash.gph"
      {"%_D_C", 		99},
      {"",0},
#line 315 "gperfapphash.gph"
      {"rtoy_C_D", 		306},
#line 111 "gperfapphash.gph"
      {"%_V_C", 		102},
      {"",0}, {"",0}, {"",0},
#line 228 "gperfapphash.gph"
      {"arctan_C", 		219},
      {"",0}, {"",0},
#line 106 "gperfapphash.gph"
      {"%_C_C", 		97},
#line 303 "gperfapphash.gph"
      {"ytor_D_D", 		294},
#line 486 "gperfapphash.gph"
      {"interpolate_V_V_D", 	477},
#line 487 "gperfapphash.gph"
      {"interpolate_V_V", 	478},
#line 309 "gperfapphash.gph"
      {"ytor_V_D", 		300},
      {"",0},
#line 427 "gperfapphash.gph"
      {"transpose_MV", 	418},
      {"",0},
#line 147 "gperfapphash.gph"
      {"abs_D", 		138},
#line 403 "gperfapphash.gph"
      {"ytos_M_D", 		394},
      {"",0},
#line 306 "gperfapphash.gph"
      {"ytor_C_D", 		297},
      {"",0},
#line 426 "gperfapphash.gph"
      {"transpose_M", 		417},
#line 149 "gperfapphash.gph"
      {"abs_V", 		140},
      {"",0},
#line 244 "gperfapphash.gph"
      {"cosec_V", 		235},
#line 242 "gperfapphash.gph"
      {"cosec_D", 		233},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 243 "gperfapphash.gph"
      {"cosec_C", 		234},
      {"",0}, {"",0}, {"",0},
#line 151 "gperfapphash.gph"
      {"abs_MV", 		142},
      {"",0},
#line 148 "gperfapphash.gph"
      {"abs_C", 		139},
#line 489 "gperfapphash.gph"
      {"ifft_V", 		480},
#line 150 "gperfapphash.gph"
      {"abs_M", 		141},
#line 436 "gperfapphash.gph"
      {"sign_D", 		427},
      {"",0},
#line 688 "gperfapphash.gph"
      {"==_C_D", 		679},
#line 691 "gperfapphash.gph"
      {"==_V_D", 		682},
      {"",0},
#line 543 "gperfapphash.gph"
      {"smooth_V_D", 		534},
#line 438 "gperfapphash.gph"
      {"sign_V", 		429},
#line 685 "gperfapphash.gph"
      {"==_D_D", 		676},
#line 690 "gperfapphash.gph"
      {"==_C_V", 		681},
#line 693 "gperfapphash.gph"
      {"==_V_V", 		684},
#line 217 "gperfapphash.gph"
      {"arcsin_V", 		208},
      {"",0}, {"",0},
#line 687 "gperfapphash.gph"
      {"==_D_V", 		678},
      {"",0}, {"",0},
#line 502 "gperfapphash.gph"
      {"range_CHR_D", 		493},
      {"",0}, {"",0}, {"",0},
#line 437 "gperfapphash.gph"
      {"sign_C", 		428},
#line 240 "gperfapphash.gph"
      {"arcsec_C", 		231},
#line 689 "gperfapphash.gph"
      {"==_C_C", 		680},
#line 692 "gperfapphash.gph"
      {"==_V_C", 		683},
      {"",0},
#line 279 "gperfapphash.gph"
      {"cosech_C", 		270},
      {"",0},
#line 686 "gperfapphash.gph"
      {"==_D_C", 		677},
#line 205 "gperfapphash.gph"
      {"ln_V", 		196},
#line 203 "gperfapphash.gph"
      {"ln_D", 		194},
      {"",0}, {"",0}, {"",0},
#line 541 "gperfapphash.gph"
      {"smooth_D_D", 		532},
#line 204 "gperfapphash.gph"
      {"ln_C", 		195},
#line 215 "gperfapphash.gph"
      {"arcsin_D", 		206},
#line 519 "gperfapphash.gph"
      {"round_V", 		510},
#line 517 "gperfapphash.gph"
      {"round_D", 		508},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 518 "gperfapphash.gph"
      {"round_C", 		509},
#line 491 "gperfapphash.gph"
      {"idft_V", 		482},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 708 "gperfapphash.gph"
      {"random", 		699},
#line 180 "gperfapphash.gph"
      {"unwrap_V", 		171},
#line 276 "gperfapphash.gph"
      {"arsech_C", 		267},
      {"",0}, {"",0}, {"",0},
#line 271 "gperfapphash.gph"
      {"arcoth_V", 		262},
      {"",0}, {"",0},
#line 259 "gperfapphash.gph"
      {"arcosh_V", 		250},
#line 234 "gperfapphash.gph"
      {"arccot_C", 		225},
#line 712 "gperfapphash.gph"
      {"assert_B", 		703},
#line 181 "gperfapphash.gph"
      {"unwrap_V_D", 		172},
#line 222 "gperfapphash.gph"
      {"arccos_C", 		213},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0},
#line 182 "gperfapphash.gph"
      {"unwrap_V_D_D", 	173},
      {"",0}, {"",0},
#line 321 "gperfapphash.gph"
      {"rtoswr_C", 		312},
      {"",0},
#line 269 "gperfapphash.gph"
      {"arcoth_D", 		260},
      {"",0}, {"",0},
#line 257 "gperfapphash.gph"
      {"arcosh_D", 		248},
      {"",0}, {"",0}, {"",0},
#line 229 "gperfapphash.gph"
      {"arctan_V", 		220},
#line 714 "gperfapphash.gph"
      {"assert_V", 		705},
#line 175 "gperfapphash.gph"
      {"arg_D", 		166},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 177 "gperfapphash.gph"
      {"arg_V", 		168},
#line 523 "gperfapphash.gph"
      {"erfc_D", 		514},
      {"",0},
#line 581 "gperfapphash.gph"
      {"arctan_V_D", 		572},
#line 152 "gperfapphash.gph"
      {"mag_D", 		143},
      {"",0},
#line 582 "gperfapphash.gph"
      {"arctan_V_V", 		573},
#line 525 "gperfapphash.gph"
      {"erfc_V", 		516},
      {"",0}, {"",0},
#line 154 "gperfapphash.gph"
      {"mag_V", 		145},
      {"",0},
#line 179 "gperfapphash.gph"
      {"arg_MV", 		170},
      {"",0},
#line 176 "gperfapphash.gph"
      {"arg_C", 		167},
      {"",0},
#line 178 "gperfapphash.gph"
      {"arg_M", 		169},
#line 227 "gperfapphash.gph"
      {"arctan_D", 		218},
#line 713 "gperfapphash.gph"
      {"assert_D", 		704},
      {"",0},
#line 336 "gperfapphash.gph"
      {"min_V_R", 		327},
#line 524 "gperfapphash.gph"
      {"erfc_C", 		515},
#line 156 "gperfapphash.gph"
      {"mag_MV", 		147},
      {"",0},
#line 153 "gperfapphash.gph"
      {"mag_C", 		144},
      {"",0},
#line 155 "gperfapphash.gph"
      {"mag_M", 		146},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 579 "gperfapphash.gph"
      {"arctan_D_D", 		570},
      {"",0}, {"",0},
#line 580 "gperfapphash.gph"
      {"arctan_D_V", 		571},
      {"",0}, {"",0}, {"",0},
#line 197 "gperfapphash.gph"
      {"exp_D", 		188},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 199 "gperfapphash.gph"
      {"exp_V", 		190},
      {"",0}, {"",0},
#line 241 "gperfapphash.gph"
      {"arcsec_V", 		232},
      {"",0}, {"",0}, {"",0},
#line 280 "gperfapphash.gph"
      {"cosech_V", 		271},
#line 264 "gperfapphash.gph"
      {"artanh_C", 		255},
#line 554 "gperfapphash.gph"
      {"stddev_C", 		545},
#line 172 "gperfapphash.gph"
      {"angle_V", 		163},
#line 170 "gperfapphash.gph"
      {"angle_D", 		161},
      {"",0}, {"",0},
#line 198 "gperfapphash.gph"
      {"exp_C", 		189},
      {"",0},
#line 171 "gperfapphash.gph"
      {"angle_C", 		162},
      {"",0},
#line 355 "gperfapphash.gph"
      {"length_MV", 		346},
      {"",0}, {"",0}, {"",0},
#line 354 "gperfapphash.gph"
      {"length_M", 		345},
      {"",0}, {"",0},
#line 352 "gperfapphash.gph"
      {"length_C", 		343},
      {"",0}, {"",0},
#line 239 "gperfapphash.gph"
      {"arcsec_D", 		230},
      {"",0}, {"",0}, {"",0},
#line 278 "gperfapphash.gph"
      {"cosech_D", 		269},
#line 277 "gperfapphash.gph"
      {"arsech_V", 		268},
#line 347 "gperfapphash.gph"
      {"avg_D", 		338},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 349 "gperfapphash.gph"
      {"avg_V", 		340},
#line 235 "gperfapphash.gph"
      {"arccot_V", 		226},
#line 482 "gperfapphash.gph"
      {"PlotVs_MV_V", 		473},
      {"",0},
#line 223 "gperfapphash.gph"
      {"arccos_V", 		214},
#line 483 "gperfapphash.gph"
      {"PlotVs_MV_V_V", 	474},
      {"",0},
#line 484 "gperfapphash.gph"
      {"PlotVs_MV_V_V_V", 	475},
      {"",0},
#line 485 "gperfapphash.gph"
      {"PlotVs_MV_V_V_V_V", 	476},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 348 "gperfapphash.gph"
      {"avg_C", 		339},
#line 588 "gperfapphash.gph"
      {"w2dbm_V", 		579},
#line 586 "gperfapphash.gph"
      {"w2dbm_D", 		577},
      {"",0},
#line 275 "gperfapphash.gph"
      {"arsech_D", 		266},
      {"",0},
#line 322 "gperfapphash.gph"
      {"rtoswr_V", 		313},
#line 587 "gperfapphash.gph"
      {"w2dbm_C", 		578},
      {"",0},
#line 445 "gperfapphash.gph"
      {"Mu_MV", 		436},
      {"",0},
#line 168 "gperfapphash.gph"
      {"phase_M", 		159},
#line 233 "gperfapphash.gph"
      {"arccot_D", 		224},
#line 444 "gperfapphash.gph"
      {"Mu_M", 		435},
      {"",0},
#line 221 "gperfapphash.gph"
      {"arccos_D", 		212},
#line 503 "gperfapphash.gph"
      {"range_D_CHR", 		494},
#line 508 "gperfapphash.gph"
      {"fix_D", 		499},
      {"",0}, {"",0}, {"",0},
#line 325 "gperfapphash.gph"
      {"max_D", 		316},
      {"",0},
#line 510 "gperfapphash.gph"
      {"fix_V", 		501},
      {"",0}, {"",0},
#line 245 "gperfapphash.gph"
      {"arccosec_D", 		236},
#line 327 "gperfapphash.gph"
      {"max_V", 		318},
      {"",0},
#line 247 "gperfapphash.gph"
      {"arccosec_V", 		238},
      {"",0},
#line 320 "gperfapphash.gph"
      {"rtoswr_D", 		311},
      {"",0}, {"",0},
#line 533 "gperfapphash.gph"
      {"cumsum_C", 		524},
#line 706 "gperfapphash.gph"
      {"==_B_B", 		697},
#line 246 "gperfapphash.gph"
      {"arccosec_C", 		237},
#line 509 "gperfapphash.gph"
      {"fix_C", 		500},
#line 529 "gperfapphash.gph"
      {"erfcinv_D", 		520},
      {"",0},
#line 329 "gperfapphash.gph"
      {"max_D_D", 		320},
#line 326 "gperfapphash.gph"
      {"max_C", 		317},
      {"",0}, {"",0},
#line 531 "gperfapphash.gph"
      {"erfcinv_V", 		522},
#line 331 "gperfapphash.gph"
      {"max_D_C", 		322},
      {"",0},
#line 511 "gperfapphash.gph"
      {"step_D", 		502},
#line 434 "gperfapphash.gph"
      {"signum_C", 		425},
      {"",0},
#line 330 "gperfapphash.gph"
      {"max_C_D", 		321},
      {"",0}, {"",0},
#line 513 "gperfapphash.gph"
      {"step_V", 		504},
      {"",0},
#line 332 "gperfapphash.gph"
      {"max_C_C", 		323},
#line 425 "gperfapphash.gph"
      {"inverse_MV", 		416},
      {"",0},
#line 530 "gperfapphash.gph"
      {"erfcinv_C", 		521},
      {"",0}, {"",0}, {"",0},
#line 593 "gperfapphash.gph"
      {"dbm_D", 		584},
#line 424 "gperfapphash.gph"
      {"inverse_M", 		415},
      {"",0}, {"",0}, {"",0},
#line 512 "gperfapphash.gph"
      {"step_C", 		503},
#line 597 "gperfapphash.gph"
      {"dbm_V", 		588},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 265 "gperfapphash.gph"
      {"artanh_V", 		256},
#line 555 "gperfapphash.gph"
      {"stddev_V", 		546},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 594 "gperfapphash.gph"
      {"dbm_D_D", 		585},
#line 595 "gperfapphash.gph"
      {"dbm_C", 		586},
      {"",0},
#line 598 "gperfapphash.gph"
      {"dbm_V_D", 		589},
      {"",0},
#line 599 "gperfapphash.gph"
      {"dbm_D_C", 		590},
      {"",0}, {"",0},
#line 601 "gperfapphash.gph"
      {"dbm_V_C", 		592},
      {"",0},
#line 596 "gperfapphash.gph"
      {"dbm_C_D", 		587},
#line 353 "gperfapphash.gph"
      {"length_V", 		344},
      {"",0}, {"",0}, {"",0},
#line 600 "gperfapphash.gph"
      {"dbm_C_C", 		591},
#line 516 "gperfapphash.gph"
      {"floor_V", 		507},
#line 514 "gperfapphash.gph"
      {"floor_D", 		505},
#line 157 "gperfapphash.gph"
      {"conj_D", 		148},
#line 263 "gperfapphash.gph"
      {"artanh_D", 		254},
#line 553 "gperfapphash.gph"
      {"stddev_D", 		544},
#line 565 "gperfapphash.gph"
      {"sqr_D", 		556},
#line 515 "gperfapphash.gph"
      {"floor_C", 		506},
      {"",0},
#line 159 "gperfapphash.gph"
      {"conj_V", 		150},
      {"",0}, {"",0},
#line 567 "gperfapphash.gph"
      {"sqr_V", 		558},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 710 "gperfapphash.gph"
      {"vector", 		701},
#line 161 "gperfapphash.gph"
      {"conj_MV", 		152},
      {"",0},
#line 351 "gperfapphash.gph"
      {"length_D", 		342},
      {"",0},
#line 158 "gperfapphash.gph"
      {"conj_C", 		149},
#line 569 "gperfapphash.gph"
      {"sqr_MV", 		560},
#line 160 "gperfapphash.gph"
      {"conj_M", 		151},
#line 566 "gperfapphash.gph"
      {"sqr_C", 		557},
      {"",0},
#line 568 "gperfapphash.gph"
      {"sqr_M", 		559},
#line 478 "gperfapphash.gph"
      {"PlotVs_V_V", 		469},
      {"",0}, {"",0}, {"",0},
#line 358 "gperfapphash.gph"
      {"array_V_D", 		349},
      {"",0},
#line 359 "gperfapphash.gph"
      {"array_V_D_D", 		350},
      {"",0}, {"",0},
#line 40 "gperfapphash.gph"
      {"-_D", 		31},
      {"",0}, {"",0},
#line 169 "gperfapphash.gph"
      {"phase_MV", 		160},
      {"",0},
#line 479 "gperfapphash.gph"
      {"PlotVs_V_V_V", 	470},
#line 42 "gperfapphash.gph"
      {"-_V", 		33},
      {"",0},
#line 45 "gperfapphash.gph"
      {"-_D_D", 		36},
      {"",0}, {"",0},
#line 49 "gperfapphash.gph"
      {"-_V_D", 		40},
      {"",0},
#line 480 "gperfapphash.gph"
      {"PlotVs_V_V_V_V", 	471},
#line 50 "gperfapphash.gph"
      {"-_D_V", 		41},
#line 481 "gperfapphash.gph"
      {"PlotVs_V_V_V_V_V", 	472},
#line 44 "gperfapphash.gph"
      {"-_MV", 		35},
#line 53 "gperfapphash.gph"
      {"-_V_V", 		44},
#line 47 "gperfapphash.gph"
      {"-_C_D", 		38},
#line 55 "gperfapphash.gph"
      {"-_M_D", 		46},
#line 41 "gperfapphash.gph"
      {"-_C", 		32},
#line 534 "gperfapphash.gph"
      {"cumsum_V", 		525},
#line 43 "gperfapphash.gph"
      {"-_M", 		34},
      {"",0},
#line 52 "gperfapphash.gph"
      {"-_C_V", 		43},
      {"",0},
#line 63 "gperfapphash.gph"
      {"-_D_MV", 		54},
#line 62 "gperfapphash.gph"
      {"-_MV_D", 		53},
#line 48 "gperfapphash.gph"
      {"-_D_C", 		39},
#line 67 "gperfapphash.gph"
      {"-_V_MV", 		58},
#line 56 "gperfapphash.gph"
      {"-_D_M", 		47},
#line 51 "gperfapphash.gph"
      {"-_V_C", 		42},
      {"",0},
#line 66 "gperfapphash.gph"
      {"-_MV_V", 		57},
#line 504 "gperfapphash.gph"
      {"range_CHR_CHR", 	495},
#line 435 "gperfapphash.gph"
      {"signum_V", 		426},
#line 65 "gperfapphash.gph"
      {"-_C_MV", 		56},
#line 61 "gperfapphash.gph"
      {"-_M_MV", 		52},
#line 46 "gperfapphash.gph"
      {"-_C_C", 		37},
#line 57 "gperfapphash.gph"
      {"-_M_C", 		48},
#line 58 "gperfapphash.gph"
      {"-_C_M", 		49},
#line 54 "gperfapphash.gph"
      {"-_M_M", 		45},
      {"",0},
#line 59 "gperfapphash.gph"
      {"-_MV_MV", 		50},
#line 193 "gperfapphash.gph"
      {"dB_MV", 		184},
#line 499 "gperfapphash.gph"
      {"yvalue_V_D", 		490},
#line 532 "gperfapphash.gph"
      {"cumsum_D", 		523},
#line 64 "gperfapphash.gph"
      {"-_MV_C", 		55},
#line 192 "gperfapphash.gph"
      {"dB_M", 		183},
#line 60 "gperfapphash.gph"
      {"-_MV_M", 		51},
#line 208 "gperfapphash.gph"
      {"log10_V", 		199},
#line 206 "gperfapphash.gph"
      {"log10_D", 		197},
      {"",0}, {"",0}, {"",0},
#line 500 "gperfapphash.gph"
      {"yvalue_V_C", 		491},
#line 207 "gperfapphash.gph"
      {"log10_C", 		198},
#line 697 "gperfapphash.gph"
      {"!=_C_D", 		688},
#line 700 "gperfapphash.gph"
      {"!=_V_D", 		691},
      {"",0},
#line 433 "gperfapphash.gph"
      {"signum_D", 		424},
      {"",0},
#line 694 "gperfapphash.gph"
      {"!=_D_D", 		685},
#line 699 "gperfapphash.gph"
      {"!=_C_V", 		690},
#line 702 "gperfapphash.gph"
      {"!=_V_V", 		693},
      {"",0}, {"",0},
#line 494 "gperfapphash.gph"
      {"receiver_V_V", 	485},
#line 696 "gperfapphash.gph"
      {"!=_D_V", 		687},
      {"",0}, {"",0},
#line 443 "gperfapphash.gph"
      {"Rollet_MV", 		434},
#line 495 "gperfapphash.gph"
      {"receiver_V_V_D", 	486},
#line 252 "gperfapphash.gph"
      {"arsinh_C", 		243},
#line 194 "gperfapphash.gph"
      {"sqrt_D", 		185},
#line 442 "gperfapphash.gph"
      {"Rollet_M", 		433},
      {"",0},
#line 698 "gperfapphash.gph"
      {"!=_C_C", 		689},
#line 701 "gperfapphash.gph"
      {"!=_V_C", 		692},
      {"",0},
#line 196 "gperfapphash.gph"
      {"sqrt_V", 		187},
#line 9 "gperfapphash.gph"
      {"+_D", 		0},
#line 695 "gperfapphash.gph"
      {"!=_D_C", 		686},
#line 703 "gperfapphash.gph"
      {"!_B", 		694},
#line 717 "gperfapphash.gph"
      {"bugon_V", 		708},
#line 716 "gperfapphash.gph"
      {"bugon_D", 		707},
      {"",0},
#line 11 "gperfapphash.gph"
      {"+_V", 		2},
      {"",0},
#line 14 "gperfapphash.gph"
      {"+_D_D", 		5},
      {"",0}, {"",0},
#line 18 "gperfapphash.gph"
      {"+_V_D", 		9},
#line 323 "gperfapphash.gph"
      {"diff_V_V", 		314},
#line 195 "gperfapphash.gph"
      {"sqrt_C", 		186},
#line 19 "gperfapphash.gph"
      {"+_D_V", 		10},
      {"",0},
#line 13 "gperfapphash.gph"
      {"+_MV", 		4},
#line 22 "gperfapphash.gph"
      {"+_V_V", 		13},
#line 16 "gperfapphash.gph"
      {"+_C_D", 		7},
#line 24 "gperfapphash.gph"
      {"+_M_D", 		15},
#line 10 "gperfapphash.gph"
      {"+_C", 		1},
      {"",0},
#line 12 "gperfapphash.gph"
      {"+_M", 		3},
#line 324 "gperfapphash.gph"
      {"diff_V_V_D", 		315},
#line 21 "gperfapphash.gph"
      {"+_C_V", 		12},
      {"",0},
#line 35 "gperfapphash.gph"
      {"+_D_MV", 		26},
#line 34 "gperfapphash.gph"
      {"+_MV_D", 		25},
#line 17 "gperfapphash.gph"
      {"+_D_C", 		8},
#line 39 "gperfapphash.gph"
      {"+_V_MV", 		30},
#line 25 "gperfapphash.gph"
      {"+_D_M", 		16},
#line 20 "gperfapphash.gph"
      {"+_V_C", 		11},
      {"",0},
#line 38 "gperfapphash.gph"
      {"+_MV_V", 		29},
      {"",0}, {"",0},
#line 37 "gperfapphash.gph"
      {"+_C_MV", 		28},
#line 33 "gperfapphash.gph"
      {"+_M_MV", 		24},
#line 15 "gperfapphash.gph"
      {"+_C_C", 		6},
#line 26 "gperfapphash.gph"
      {"+_M_C", 		17},
#line 27 "gperfapphash.gph"
      {"+_C_M", 		18},
#line 23 "gperfapphash.gph"
      {"+_M_M", 		14},
      {"",0},
#line 31 "gperfapphash.gph"
      {"+_MV_MV", 		22},
      {"",0}, {"",0}, {"",0},
#line 36 "gperfapphash.gph"
      {"+_MV_C", 		27},
      {"",0},
#line 32 "gperfapphash.gph"
      {"+_MV_M", 		23},
#line 646 "gperfapphash.gph"
      {"?:_V_D_C", 		637},
#line 449 "gperfapphash.gph"
      {"StabFactor_MV", 	440},
#line 562 "gperfapphash.gph"
      {"bessely_D_D", 		553},
#line 648 "gperfapphash.gph"
      {"?:_V_V_C", 		639},
      {"",0}, {"",0},
#line 621 "gperfapphash.gph"
      {"?:_B_D_M", 		612},
#line 448 "gperfapphash.gph"
      {"StabFactor_M", 	439},
#line 564 "gperfapphash.gph"
      {"bessely_D_V", 		555},
#line 614 "gperfapphash.gph"
      {"?:_B_D_C", 		605},
#line 647 "gperfapphash.gph"
      {"?:_V_C_C", 		638},
      {"",0},
#line 632 "gperfapphash.gph"
      {"?:_B_V_C", 		623},
      {"",0}, {"",0}, {"",0},
#line 622 "gperfapphash.gph"
      {"?:_B_C_M", 		613},
#line 619 "gperfapphash.gph"
      {"?:_B_M_M", 		610},
      {"",0},
#line 618 "gperfapphash.gph"
      {"?:_B_C_C", 		609},
#line 625 "gperfapphash.gph"
      {"?:_B_M_C", 		616},
      {"",0},
#line 563 "gperfapphash.gph"
      {"bessely_D_C", 		554},
      {"",0},
#line 572 "gperfapphash.gph"
      {"polar_C_D", 		563},
#line 576 "gperfapphash.gph"
      {"polar_V_D", 		567},
      {"",0},
#line 399 "gperfapphash.gph"
      {"stoz_MV_D", 		390},
#line 398 "gperfapphash.gph"
      {"stoz_MV", 		389},
#line 570 "gperfapphash.gph"
      {"polar_D_D", 		561},
#line 575 "gperfapphash.gph"
      {"polar_C_V", 		566},
#line 578 "gperfapphash.gph"
      {"polar_V_V", 		569},
      {"",0},
#line 401 "gperfapphash.gph"
      {"stoz_MV_V", 		392},
#line 394 "gperfapphash.gph"
      {"stoz_M", 		385},
#line 574 "gperfapphash.gph"
      {"polar_D_V", 		565},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 432 "gperfapphash.gph"
      {"adjoint_MV", 		423},
      {"",0}, {"",0},
#line 573 "gperfapphash.gph"
      {"polar_C_C", 		564},
#line 577 "gperfapphash.gph"
      {"polar_V_C", 		568},
#line 396 "gperfapphash.gph"
      {"stoz_M_C", 		387},
#line 400 "gperfapphash.gph"
      {"stoz_MV_C", 		391},
#line 431 "gperfapphash.gph"
      {"adjoint_M", 		422},
#line 571 "gperfapphash.gph"
      {"polar_D_C", 		562},
#line 68 "gperfapphash.gph"
      {"*_D_D", 		59},
      {"",0}, {"",0},
#line 72 "gperfapphash.gph"
      {"*_V_D", 		63},
#line 361 "gperfapphash.gph"
      {"array_STR_D", 		352},
      {"",0},
#line 73 "gperfapphash.gph"
      {"*_D_V", 		64},
      {"",0},
#line 496 "gperfapphash.gph"
      {"fftshift_V", 		487},
#line 76 "gperfapphash.gph"
      {"*_V_V", 		67},
#line 70 "gperfapphash.gph"
      {"*_C_D", 		61},
#line 80 "gperfapphash.gph"
      {"*_M_D", 		71},
      {"",0},
#line 253 "gperfapphash.gph"
      {"arsinh_V", 		244},
      {"",0},
#line 350 "gperfapphash.gph"
      {"avg_V_R", 		341},
#line 75 "gperfapphash.gph"
      {"*_C_V", 		66},
#line 715 "gperfapphash.gph"
      {"bugon_B", 		706},
#line 88 "gperfapphash.gph"
      {"*_D_MV", 		79},
#line 87 "gperfapphash.gph"
      {"*_MV_D", 		78},
#line 71 "gperfapphash.gph"
      {"*_D_C", 		62},
#line 90 "gperfapphash.gph"
      {"*_V_MV", 		81},
#line 81 "gperfapphash.gph"
      {"*_D_M", 		72},
#line 74 "gperfapphash.gph"
      {"*_V_C", 		65},
      {"",0},
#line 89 "gperfapphash.gph"
      {"*_MV_V", 		80},
      {"",0}, {"",0},
#line 86 "gperfapphash.gph"
      {"*_C_MV", 		77},
#line 84 "gperfapphash.gph"
      {"*_M_MV", 		75},
#line 69 "gperfapphash.gph"
      {"*_C_C", 		60},
#line 78 "gperfapphash.gph"
      {"*_M_C", 		69},
#line 79 "gperfapphash.gph"
      {"*_C_M", 		70},
#line 77 "gperfapphash.gph"
      {"*_M_M", 		68},
      {"",0},
#line 82 "gperfapphash.gph"
      {"*_MV_MV", 		73},
      {"",0}, {"",0},
#line 251 "gperfapphash.gph"
      {"arsinh_D", 		242},
#line 85 "gperfapphash.gph"
      {"*_MV_C", 		76},
      {"",0},
#line 83 "gperfapphash.gph"
      {"*_MV_M", 		74},
      {"",0},
#line 638 "gperfapphash.gph"
      {"?:_V_D_B", 		629},
      {"",0}, {"",0},
#line 640 "gperfapphash.gph"
      {"?:_V_V_B", 		631},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 612 "gperfapphash.gph"
      {"?:_B_D_B", 		603},
#line 639 "gperfapphash.gph"
      {"?:_V_C_B", 		630},
      {"",0},
#line 630 "gperfapphash.gph"
      {"?:_B_V_B", 		621},
#line 328 "gperfapphash.gph"
      {"max_V_R", 		319},
      {"",0},
#line 645 "gperfapphash.gph"
      {"?:_V_B_C", 		636},
#line 293 "gperfapphash.gph"
      {"rtoz_D", 		284},
      {"",0}, {"",0},
#line 617 "gperfapphash.gph"
      {"?:_B_C_B", 		608},
#line 623 "gperfapphash.gph"
      {"?:_B_M_B", 		614},
#line 620 "gperfapphash.gph"
      {"?:_B_B_M", 		611},
#line 299 "gperfapphash.gph"
      {"rtoz_V", 		290},
      {"",0},
#line 615 "gperfapphash.gph"
      {"?:_B_B_C", 		606},
      {"",0}, {"",0},
#line 419 "gperfapphash.gph"
      {"ytoz_MV", 		410},
#line 635 "gperfapphash.gph"
      {"?:_V_D_V", 		626},
      {"",0}, {"",0},
#line 633 "gperfapphash.gph"
      {"?:_V_V_V", 		624},
      {"",0},
#line 418 "gperfapphash.gph"
      {"ytoz_M", 		409},
      {"",0}, {"",0},
#line 296 "gperfapphash.gph"
      {"rtoz_C", 		287},
#line 628 "gperfapphash.gph"
      {"?:_B_D_V", 		619},
#line 636 "gperfapphash.gph"
      {"?:_V_C_V", 		627},
#line 295 "gperfapphash.gph"
      {"rtoz_D_C", 		286},
#line 626 "gperfapphash.gph"
      {"?:_B_V_V", 		617},
#line 452 "gperfapphash.gph"
      {"linspace_D_D_D", 	443},
#line 301 "gperfapphash.gph"
      {"rtoz_V_C", 		292},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 629 "gperfapphash.gph"
      {"?:_B_C_V", 		620},
      {"",0},
#line 298 "gperfapphash.gph"
      {"rtoz_C_C", 		289},
      {"",0}, {"",0},
#line 173 "gperfapphash.gph"
      {"angle_M", 		164},
#line 642 "gperfapphash.gph"
      {"?:_V_D_D", 		633},
      {"",0}, {"",0},
#line 644 "gperfapphash.gph"
      {"?:_V_V_D", 		635},
      {"",0}, {"",0},
#line 707 "gperfapphash.gph"
      {"!=_B_B", 		698},
      {"",0}, {"",0},
#line 611 "gperfapphash.gph"
      {"?:_B_D_D", 		602},
#line 643 "gperfapphash.gph"
      {"?:_V_C_D", 		634},
      {"",0},
#line 631 "gperfapphash.gph"
      {"?:_B_V_D", 		622},
      {"",0}, {"",0},
#line 545 "gperfapphash.gph"
      {"groupdelay_V", 	536},
      {"",0},
#line 544 "gperfapphash.gph"
      {"groupdelay_MV", 	535},
#line 546 "gperfapphash.gph"
      {"groupdelay_MV_D_D", 	537},
#line 616 "gperfapphash.gph"
      {"?:_B_C_D", 		607},
#line 624 "gperfapphash.gph"
      {"?:_B_M_D", 		615},
#line 397 "gperfapphash.gph"
      {"stoz_M_V", 		388},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 676 "gperfapphash.gph"
      {">_D_D", 		667},
#line 538 "gperfapphash.gph"
      {"cumprod_D", 		529},
      {"",0},
#line 682 "gperfapphash.gph"
      {">_V_D", 		673},
      {"",0}, {"",0},
#line 678 "gperfapphash.gph"
      {">_D_V", 		669},
#line 540 "gperfapphash.gph"
      {"cumprod_V", 		531},
      {"",0},
#line 684 "gperfapphash.gph"
      {">_V_V", 		675},
#line 679 "gperfapphash.gph"
      {">_C_D", 		670},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 681 "gperfapphash.gph"
      {">_C_V", 		672},
      {"",0}, {"",0},
#line 395 "gperfapphash.gph"
      {"stoz_M_D", 		386},
#line 677 "gperfapphash.gph"
      {">_D_C", 		668},
#line 539 "gperfapphash.gph"
      {"cumprod_C", 		530},
      {"",0},
#line 683 "gperfapphash.gph"
      {">_V_C", 		674},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 637 "gperfapphash.gph"
      {"?:_V_B_B", 		628},
      {"",0},
#line 680 "gperfapphash.gph"
      {">_C_C", 		671},
      {"",0},
#line 667 "gperfapphash.gph"
      {"<_D_D", 		658},
      {"",0}, {"",0},
#line 673 "gperfapphash.gph"
      {"<_V_D", 		664},
      {"",0},
#line 610 "gperfapphash.gph"
      {"?:_B_B_B", 		601},
#line 669 "gperfapphash.gph"
      {"<_D_V", 		660},
      {"",0}, {"",0},
#line 675 "gperfapphash.gph"
      {"<_V_V", 		666},
#line 670 "gperfapphash.gph"
      {"<_C_D", 		661},
      {"",0},
#line 281 "gperfapphash.gph"
      {"arcosech_D", 		272},
      {"",0}, {"",0},
#line 283 "gperfapphash.gph"
      {"arcosech_V", 		274},
#line 672 "gperfapphash.gph"
      {"<_C_V", 		663},
      {"",0},
#line 609 "gperfapphash.gph"
      {"kbd_D", 		600},
      {"",0},
#line 668 "gperfapphash.gph"
      {"<_D_C", 		659},
      {"",0},
#line 282 "gperfapphash.gph"
      {"arcosech_C", 		273},
#line 674 "gperfapphash.gph"
      {"<_V_C", 		665},
#line 634 "gperfapphash.gph"
      {"?:_V_B_V", 		625},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 671 "gperfapphash.gph"
      {"<_C_C", 		662},
      {"",0}, {"",0},
#line 627 "gperfapphash.gph"
      {"?:_B_B_V", 		618},
      {"",0}, {"",0}, {"",0},
#line 608 "gperfapphash.gph"
      {"kbd_D_D", 		599},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 711 "gperfapphash.gph"
      {"matrix", 		702},
#line 497 "gperfapphash.gph"
      {"xvalue_V_D", 		488},
      {"",0},
#line 493 "gperfapphash.gph"
      {"Freq2Time_V_V", 	484},
      {"",0}, {"",0},
#line 527 "gperfapphash.gph"
      {"erfinv_C", 		518},
#line 641 "gperfapphash.gph"
      {"?:_V_B_D", 		632},
      {"",0}, {"",0}, {"",0},
#line 498 "gperfapphash.gph"
      {"xvalue_V_C", 		489},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 613 "gperfapphash.gph"
      {"?:_B_B_D", 		604},
#line 114 "gperfapphash.gph"
      {"^_D_D", 		105},
      {"",0}, {"",0},
#line 118 "gperfapphash.gph"
      {"^_V_D", 		109},
      {"",0}, {"",0},
#line 119 "gperfapphash.gph"
      {"^_D_V", 		110},
#line 174 "gperfapphash.gph"
      {"angle_MV", 		165},
      {"",0},
#line 122 "gperfapphash.gph"
      {"^_V_V", 		113},
#line 116 "gperfapphash.gph"
      {"^_C_D", 		107},
#line 123 "gperfapphash.gph"
      {"^_M_D", 		114},
      {"",0},
#line 603 "gperfapphash.gph"
      {"runavg_C_D", 		594},
#line 294 "gperfapphash.gph"
      {"rtoz_D_D", 		285},
      {"",0},
#line 121 "gperfapphash.gph"
      {"^_C_V", 		112},
#line 300 "gperfapphash.gph"
      {"rtoz_V_D", 		291},
      {"",0},
#line 125 "gperfapphash.gph"
      {"^_MV_D", 		116},
#line 117 "gperfapphash.gph"
      {"^_D_C", 		108},
      {"",0},
#line 423 "gperfapphash.gph"
      {"twoport_MV_CHR_CHR", 	414},
#line 120 "gperfapphash.gph"
      {"^_V_C", 		111},
#line 297 "gperfapphash.gph"
      {"rtoz_C_D", 		288},
#line 127 "gperfapphash.gph"
      {"^_MV_V", 		118},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 115 "gperfapphash.gph"
      {"^_C_C", 		106},
#line 124 "gperfapphash.gph"
      {"^_M_C", 		115},
      {"",0}, {"",0},
#line 91 "gperfapphash.gph"
      {"/_D_D", 		82},
#line 201 "gperfapphash.gph"
      {"limexp_C", 		192},
      {"",0},
#line 95 "gperfapphash.gph"
      {"/_V_D", 		86},
      {"",0},
#line 126 "gperfapphash.gph"
      {"^_MV_C", 		117},
#line 96 "gperfapphash.gph"
      {"/_D_V", 		87},
      {"",0}, {"",0},
#line 99 "gperfapphash.gph"
      {"/_V_V", 		90},
#line 93 "gperfapphash.gph"
      {"/_C_D", 		84},
#line 101 "gperfapphash.gph"
      {"/_M_D", 		92},
      {"",0}, {"",0},
#line 360 "gperfapphash.gph"
      {"array_M_D_D", 		351},
#line 186 "gperfapphash.gph"
      {"rad2deg_D", 		177},
#line 98 "gperfapphash.gph"
      {"/_C_V", 		89},
      {"",0}, {"",0},
#line 103 "gperfapphash.gph"
      {"/_MV_D", 		94},
#line 94 "gperfapphash.gph"
      {"/_D_C", 		85},
#line 188 "gperfapphash.gph"
      {"rad2deg_V", 		179},
      {"",0},
#line 97 "gperfapphash.gph"
      {"/_V_C", 		88},
      {"",0},
#line 104 "gperfapphash.gph"
      {"/_MV_V", 		95},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 92 "gperfapphash.gph"
      {"/_C_C", 		83},
#line 100 "gperfapphash.gph"
      {"/_M_C", 		91},
      {"",0}, {"",0}, {"",0},
#line 187 "gperfapphash.gph"
      {"rad2deg_C", 		178},
      {"",0}, {"",0}, {"",0},
#line 102 "gperfapphash.gph"
      {"/_MV_C", 		93},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0},
#line 589 "gperfapphash.gph"
      {"integrate_D_D", 	580},
      {"",0}, {"",0},
#line 591 "gperfapphash.gph"
      {"integrate_V_D", 	582},
      {"",0}, {"",0},
#line 661 "gperfapphash.gph"
      {">=_C_D", 		652},
#line 664 "gperfapphash.gph"
      {">=_V_D", 		655},
#line 592 "gperfapphash.gph"
      {"integrate_V_C", 	583},
      {"",0}, {"",0},
#line 658 "gperfapphash.gph"
      {">=_D_D", 		649},
#line 663 "gperfapphash.gph"
      {">=_C_V", 		654},
#line 666 "gperfapphash.gph"
      {">=_V_V", 		657},
      {"",0},
#line 590 "gperfapphash.gph"
      {"integrate_C_C", 	581},
      {"",0},
#line 660 "gperfapphash.gph"
      {">=_D_V", 		651},
#line 461 "gperfapphash.gph"
      {"StabCircleL_MV_D", 	452},
#line 462 "gperfapphash.gph"
      {"StabCircleL_MV", 	453},
      {"",0},
#line 460 "gperfapphash.gph"
      {"StabCircleL_MV_V", 	451},
      {"",0}, {"",0}, {"",0},
#line 528 "gperfapphash.gph"
      {"erfinv_V", 		519},
#line 662 "gperfapphash.gph"
      {">=_C_C", 		653},
#line 665 "gperfapphash.gph"
      {">=_V_C", 		656},
      {"",0},
#line 536 "gperfapphash.gph"
      {"cumavg_C", 		527},
      {"",0},
#line 659 "gperfapphash.gph"
      {">=_D_C", 		650},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 652 "gperfapphash.gph"
      {"<=_C_D", 		643},
#line 655 "gperfapphash.gph"
      {"<=_V_D", 		646},
      {"",0}, {"",0}, {"",0},
#line 649 "gperfapphash.gph"
      {"<=_D_D", 		640},
#line 654 "gperfapphash.gph"
      {"<=_C_V", 		645},
#line 657 "gperfapphash.gph"
      {"<=_V_V", 		648},
      {"",0}, {"",0}, {"",0},
#line 651 "gperfapphash.gph"
      {"<=_D_V", 		642},
#line 526 "gperfapphash.gph"
      {"erfinv_D", 		517},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 604 "gperfapphash.gph"
      {"runavg_V_D", 		595},
      {"",0},
#line 653 "gperfapphash.gph"
      {"<=_C_C", 		644},
#line 656 "gperfapphash.gph"
      {"<=_V_C", 		647},
      {"",0}, {"",0}, {"",0},
#line 650 "gperfapphash.gph"
      {"<=_D_C", 		641},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 202 "gperfapphash.gph"
      {"limexp_V", 		193},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 458 "gperfapphash.gph"
      {"NoiseCircle_V_V_V_V_D", 449},
#line 459 "gperfapphash.gph"
      {"NoiseCircle_V_V_V_V", 	450},
#line 456 "gperfapphash.gph"
      {"NoiseCircle_V_V_V_D", 	447},
#line 457 "gperfapphash.gph"
      {"NoiseCircle_V_V_V_V_V", 448},
#line 455 "gperfapphash.gph"
      {"NoiseCircle_V_V_V_D_D", 446},
#line 602 "gperfapphash.gph"
      {"runavg_D_D", 		593},
      {"",0},
#line 454 "gperfapphash.gph"
      {"NoiseCircle_V_V_V_D_V", 445},
#line 422 "gperfapphash.gph"
      {"twoport_M_CHR_CHR", 	413},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 200 "gperfapphash.gph"
      {"limexp_D", 		191},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0},
#line 357 "gperfapphash.gph"
      {"array_MV_D", 		348},
      {"",0}, {"",0},
#line 470 "gperfapphash.gph"
      {"GaCircle_MV_V_D", 	461},
#line 471 "gperfapphash.gph"
      {"GaCircle_MV_V", 	462},
#line 468 "gperfapphash.gph"
      {"GaCircle_MV_D", 	459},
#line 469 "gperfapphash.gph"
      {"GaCircle_MV_V_V", 	460},
#line 467 "gperfapphash.gph"
      {"GaCircle_MV_D_D", 	458},
      {"",0}, {"",0},
#line 466 "gperfapphash.gph"
      {"GaCircle_MV_D_V", 	457},
      {"",0},
#line 453 "gperfapphash.gph"
      {"logspace_D_D_D", 	444},
      {"",0},
#line 356 "gperfapphash.gph"
      {"array_MV_D_D", 	347},
#line 476 "gperfapphash.gph"
      {"GpCircle_MV_V_D", 	467},
#line 477 "gperfapphash.gph"
      {"GpCircle_MV_V", 	468},
#line 474 "gperfapphash.gph"
      {"GpCircle_MV_D", 	465},
#line 475 "gperfapphash.gph"
      {"GpCircle_MV_V_V", 	466},
#line 473 "gperfapphash.gph"
      {"GpCircle_MV_D_D", 	464},
      {"",0}, {"",0},
#line 472 "gperfapphash.gph"
      {"GpCircle_MV_D_V", 	463},
      {"",0}, {"",0},
#line 183 "gperfapphash.gph"
      {"deg2rad_D", 		174},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 185 "gperfapphash.gph"
      {"deg2rad_V", 		176},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 492 "gperfapphash.gph"
      {"Time2Freq_V_V", 	483},
      {"",0}, {"",0},
#line 537 "gperfapphash.gph"
      {"cumavg_V", 		528},
      {"",0},
#line 184 "gperfapphash.gph"
      {"deg2rad_C", 		175},
      {"",0}, {"",0},
#line 451 "gperfapphash.gph"
      {"StabMeasure_MV", 	442},
      {"",0}, {"",0}, {"",0},
#line 209 "gperfapphash.gph"
      {"log2_D", 		200},
      {"",0}, {"",0},
#line 450 "gperfapphash.gph"
      {"StabMeasure_M", 	441},
#line 464 "gperfapphash.gph"
      {"StabCircleS_MV_D", 	455},
#line 465 "gperfapphash.gph"
      {"StabCircleS_MV", 	456},
#line 211 "gperfapphash.gph"
      {"log2_V", 		202},
#line 463 "gperfapphash.gph"
      {"StabCircleS_MV_V", 	454},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 535 "gperfapphash.gph"
      {"cumavg_D", 		526},
#line 29 "gperfapphash.gph"
      {"+_CHR_STR", 		20},
      {"",0}, {"",0},
#line 210 "gperfapphash.gph"
      {"log2_C", 		201},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0},
#line 585 "gperfapphash.gph"
      {"dbm2w_V", 		576},
#line 583 "gperfapphash.gph"
      {"dbm2w_D", 		574},
#line 559 "gperfapphash.gph"
      {"besselj_D_D", 		550},
      {"",0}, {"",0}, {"",0},
#line 584 "gperfapphash.gph"
      {"dbm2w_C", 		575},
      {"",0},
#line 561 "gperfapphash.gph"
      {"besselj_D_V", 		552},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0},
#line 560 "gperfapphash.gph"
      {"besselj_D_C", 		551},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 550 "gperfapphash.gph"
      {"variance_D", 		541},
      {"",0}, {"",0},
#line 552 "gperfapphash.gph"
      {"variance_V", 		543},
#line 556 "gperfapphash.gph"
      {"besseli0_D", 		547},
      {"",0}, {"",0},
#line 558 "gperfapphash.gph"
      {"besseli0_V", 		549},
      {"",0}, {"",0},
#line 551 "gperfapphash.gph"
      {"variance_C", 		542},
      {"",0}, {"",0}, {"",0},
#line 557 "gperfapphash.gph"
      {"besseli0_C", 		548},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
#line 30 "gperfapphash.gph"
      {"+_STR_CHR", 		21},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"",0},
#line 28 "gperfapphash.gph"
      {"+_STR_STR", 		19}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = applist[key].key;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &applist[key];
        }
    }
  return 0;
}
