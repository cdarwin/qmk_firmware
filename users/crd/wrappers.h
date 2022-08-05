// Layer Taps
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_SPM2 LT(2, KC_SPC)
#define KC_SPM1 LT(1, KC_SPC)
#define KC_ENM2 LT(2, KC_ENT)
#define KC_TAM2 LT(2, KC_TAB)
#define KC_ENM3 LT(3, KC_ENT)
#define KC_TAM3 LT(3, KC_TAB)

// home row mods
#define CAGS(k1,k2,k3,k4,k5) CTL_T(k1),ALT_T(k2),GUI_T(k3),SFT_T(k4),k5
#define HRML(...) CAGS(__VA_ARGS__)
#define SGAC(k0,k1,k2,k3,k4) k0,SFT_T(k1),GUI_T(k2),ALT_T(k3),CTL_T(k4)
#define HRMR(...) SGAC(__VA_ARGS__)

// Convenient Shortcuts
#define ZM_MUTE LSG(KC_A)
#define ZM_VMUT LSG(KC_V)
#define DC_NXT LSA(KC_DOWN)
#define DC_PRV LSA(KC_UP)
#define IJ_BCK LGUI(KC_LBRC)
#define IJ_FWD LGUI(KC_RBRC)

/* Layout Wrappers */
#define XXX KC_NO

#define LAYOUT_wrapper(...)       LAYOUT(__VA_ARGS__)

#define LAYOUT_reviung34_wrapper(...)                  LAYOUT_reviung34(__VA_ARGS__)

#define LAYOUT_split_3x6_3_wrapper(...)       LAYOUT_split_3x6_3(__VA_ARGS__)
#define LAYOUT_split_3x6_3_base( \
  L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, \
  L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, \
  L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, \
                 L30, L31,           R31, R32 \
  ) \
  LAYOUT_split_3x6_3_wrapper( \
  KC_VOLU, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, KC_MNXT, \
  KC_MUTE, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, KC_MPLY, \
  KC_VOLD, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, KC_MPRV, \
         LT(2,L30), LT(1,L31), ZM_MUTE, ZM_VMUT, LT(1,R31), LT(2,R32) \
  )
#define LAYOUT_split_3x6_3_base_wrapper(...)       LAYOUT_split_3x6_3_base(__VA_ARGS__)

#define LAYOUT_atreus_base( \
  k00, k01, k02, k03, k04,           k05, k06, k07, k08, k09, \
  k10, k11, k12, k13, k14,           k15, k16, k17, k18, k19, \
  k20, k21, k22, k23, k24,           k27, k28, k29, k2a, k2b, \
                 k33, k34, k35, k36, k37, k38                 \
) \
  LAYOUT( \
      k00,     k01,     k02,       k03,       k04,                             k05,       k06,     k07,     k08,     k09, \
      k10,     k11,     k12,       k13,       k14,                             k15,       k16,     k17,     k18,     k19, \
      k20,     k21,     k22,       k23,       k24,      XXX,       XXX,        k27,       k28,     k29,     k2a,     k2b, \
  KC_VOLU, KC_MUTE, KC_VOLD, LT(2,k33), LT(1,k34), LT(2,k35), LT(2,k36), LT(1,k37), LT(2,k38), KC_MPRV, KC_MPLY, KC_MNXT  \
)
#define LAYOUT_atreus_base_wrapper(...)       LAYOUT_atreus_base(__VA_ARGS__)

#define LAYOUT_kyria_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
    K31, K32, K33, K34, K35, K36 \
  ) \
  LAYOUT( \
      KC_VOLU, K01, K02, K03, K04, K05,                           K06, K07, K08, K09, K0A, KC_MNXT, \
      KC_MUTE, K11, K12, K13, K14, K15,                           K16, K17, K18, K19, K1A, KC_MPLY, \
      KC_VOLD, K21, K22, K23, K24, K25, XXX, XXX, /* */ XXX, XXX, K26, K27, K28, K29, K2A, KC_MPRV, \
   KC_MPLY, XXX, LT(2,K31), LT(1,K32), LT(2,K33), /* */ LT(2,K34), LT(1,K35), LT(2,K36), XXX, KC_MUTE \
    )
#define LAYOUT_kyria_base_wrapper(...)       LAYOUT_kyria_base(__VA_ARGS__)

#define LAYOUT_dacmani_base(\
K00, K01, K02, K03, K04,                         K05, K06, K07, K08, K09,\
K10, K11, K12, K13, K14,                         K15, K16, K17, K18, K19,\
K20, K21, K22, K23, K24,                         K25, K26, K27, K28, K29,\
          K32, K33,                                   K36, K37          \
)\
LAYOUT( \
K00, K01, K02, K03, K04,                         K05, K06, K07, K08, K09,\
K10, K11, K12, K13, K14,                         K15, K16, K17, K18, K19,\
K20, K21, K22, K23, K24,                         K25, K26, K27, K28, K29,\
     XXX, XXX,                                             XXX, XXX, \
   LT(2,K32), LT(1,K33),                         LT(1,K36), LT(2,K37), \
                         XXX, XXX,     XXX, XXX, \
                         XXX, XXX,     XXX, XXX  \
)
#define LAYOUT_dacmani_base_wrapper(...)       LAYOUT_dacmani_base(__VA_ARGS__)

#define LAYOUT_jd45_base( \
         k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a,      k0c, \
         k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a,           \
         k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a,           \
         k31, k32,                    k36,            k39, k3a       \
) \
LAYOUT_wrapper( \
      KC_TAB, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a,  KC_BSPC, k0c, \
     KC_GESC, k11,        k12, k13, k14, k15, k16, k17, k18, k19,       k1a,  KC_ENT,       \
     KC_LSFT, k21,          k22, k23, k24, k25, k26, k27, k28, k29,     k2a, KC_RSFT,      \
    XXX, k31, k32, XXX,      XXX,     k36,       XXX, k39, k3a, XXX  \
)
#define LAYOUT_jd45_base_wrapper(...)       LAYOUT_jd45_base(__VA_ARGS__)

#define LAYOUT_prime_e_base( \
	      K001, K002, K003, K004, K005,  		K006, K007, K008, K009, K010,             \
	      K101, K102, K103, K104, K105,  		K106, K107, K108, K109, K110,       \
	      K201, K202, K203, K204, K205,  		      K207, K208, K209, K210, K211,       \
	             			      K304,  		K306       				           \
) \
LAYOUT( \
	 KC_TAB, K001, K002, K003, K004, K005,  		K006, K007, K008, K009, K010, KC_BSPC, KC_DEL, \
	KC_LCTL, K101, K102, K103, K104, K105,  		K106, K107, K108, K109, K110, KC_ENT, \
	KC_LSFT, K201, K202, K203, K204, K205,  		 XXX, K207, K208, K209, K210, K211, KC_RSFT, \
	KC_LCTL, KC_LOPT,  	    KC_LCMD, K304,  		K306, KC_LOPT, 			   KC_LCMD, KC_LCTL \
)
#define LAYOUT_prime_e_wrapper(...)       LAYOUT_prime_e_base(__VA_ARGS__)


#define LAYOUT_hhkb_base( \
    K01, K02, K13, K12, K23, K22, K42, K43, K62, K63, \
    K04, K03, K14, K15, K24, K25, K45, K44, K65, K64, \
    K05, K06, K07, K16, K17, K26, K46, K66, K76, K75, \
    K37 \
) \
LAYOUT( \
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV, \
    KC_TAB, K01, K02, K13, K12, K23, K22, K42, K43, K62, K63, KC_LBRC, KC_RBRC, KC_BSPC, \
    KC_LCTL, K04, K03, K14, K15, K24, K25, K45, K44, K65, K64, KC_QUOT, KC_ENT, \
    KC_LSFT, K05, K06, K07, K16, K17, K26, K46, K66, K76, K75, KC_RSFT, MO(1), \
    KC_LALT, KC_LGUI, /*        */ K37, KC_RGUI, KC_RALT \
)
#define LAYOUT_hhkb_base_wrapper(...) LAYOUT_hhkb_base(__VA_ARGS__)

#define LAYOUT_alice_base( \
    k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, \
    k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, \
    k32, k33, k34, k35, k36, k38, k39, k3a, k3b, k3c, \
    k45, k48  \
) \
LAYOUT( \
RGB_TOG, KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV, \
RGB_MOD, KC_TAB,  k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b,    KC_LBRC, KC_RBRC, KC_BSPC, \
RGB_RMOD, KC_LCTL, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, KC_QUOT,          KC_ENT, \
KC_LSFT, k32, k33, k34, k35, k36, MO(2), k38, k39, k3a, k3b, k3c, KC_RSFT, MO(1), \
KC_LCTL,    KC_LGUI, k45, MO(2),     k48,       KC_RALT,                   KC_RCTRL \
)
#define LAYOUT_alice_base_wrapper(...) LAYOUT_alice_base(__VA_ARGS__)

/* Base Layers */
#define _____________3x5_QWERTY_L1_________________      LT(2,KC_Q),    KC_W,    KC_E,    KC_R,    KC_T
#define _____________3x5_QWERTY_L2_________________      KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _____________3x5_QWERTY_L3_________________      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _____________3x5_QWERTY_R1_________________      KC_Y,    KC_U,    KC_I,    KC_O,    LT(2,KC_P)
#define _____________3x5_QWERTY_R2_________________      KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN
#define _____________3x5_QWERTY_R3_________________      KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH

/*  Numbers & Navigation */
#define _____________3x5_NUM_NAV_L1________________    KC_TAB,    KC_7,    KC_8,    KC_9, KC_SCLN
#define _____________3x5_NUM_NAV_L2________________    KC_ESC,    KC_4,    KC_5,    KC_6, KC_MINS
#define _____________3x5_NUM_NAV_L3________________      KC_0,    KC_1,    KC_2,    KC_3,  KC_GRV

#define _____________3x5_NUM_NAV_R1________________   KC_QUOT, XXXXXXX, XXXXXXX, XXXXXXX,  KC_ENT
#define _____________3x5_NUM_NAV_R2________________    KC_EQL, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT
#define _____________3x5_NUM_NAV_R3________________   KC_BSLS, KC_HOME, KC_PGDN, KC_PGUP,  KC_END

/* Symbols */
#define _____________3x5_____SYM_L1________________     RESET, KC_VOLD, KC_MUTE, KC_VOLU, KC_COLN
#define _____________3x5_____SYM_L2________________     KC_LT, KC_LCBR, KC_LBRC, KC_LPRN, KC_UNDS
#define _____________3x5_____SYM_L3________________   KC_LSFT, G(KC_X), G(KC_C), G(KC_V), KC_TILD

#define _____________3x5_____SYM_R1________________   KC_DQUO, KC_MPRV, KC_MPLY, KC_MNXT,   RESET
#define _____________3x5_____SYM_R2________________   KC_PLUS, KC_RPRN, KC_RBRC, KC_RCBR,   KC_GT
#define _____________3x5_____SYM_R3________________   KC_PIPE,  IJ_BCK,  DC_NXT,  DC_PRV,  IJ_FWD
