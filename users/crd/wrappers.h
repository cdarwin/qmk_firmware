// Thumbs
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_SPM2 LT(2, KC_SPC)
#define KC_ENM3 LT(3, KC_ENT)
#define KC_TAM3 LT(3, KC_TAB)

// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)
#define L2_V LT(2, KC_V)
#define L2_M LT(2, KC_M)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCL RCTL_T(KC_SCLN)

// Convenient Shortcuts
#define CTL_ESC LCTL_T(KC_ESC)
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
                 L30, L31, L32, R30, R31, R32 \
  ) \
  LAYOUT_split_3x6_3_wrapper( \
   KC_TAB, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, KC_BSPC, \
  KC_GESC, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14,  KC_ENT, \
  KC_LSFT, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, KC_RSFT, \
                          L30, L31, L32, R30, R31, R32 \
  )
#define LAYOUT_split_3x6_3_base_wrapper(...)       LAYOUT_split_3x6_3_base(__VA_ARGS__)

#define LAYOUT_kyria_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
    K31, K32, K33, K34, K35, K36 \
  ) \
  LAYOUT_wrapper( \
       KC_TAB, K01, K02, K03, K04, K05,                           K06, K07, K08, K09, K0A, KC_BSPC, \
      KC_GESC, K11, K12, K13, K14, K15,                           K16, K17, K18, K19, K1A,  KC_ENT, \
      KC_LSFT, K21, K22, K23, K24, K25, XXX, XXX, /* */ XXX, XXX, K26, K27, K28, K29, K2A, KC_RSFT, \
                     KC_MPLY, XXX, K31, K32, K33, /* */ K34, K35, K36, XXX, KC_MUTE \
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
               K32, K33,                         K36, K37, \
                         XXX, XXX,     XXX, XXX, \
                         XXX, XXX,     XXX, XXX                          \
)
#define LAYOUT_dacmani_base_wrapper(...)       LAYOUT_dacmani_base(__VA_ARGS__)

/* Base Layers */
#define _____________3x5_QWERTY_L1_________________      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _____________3x5_QWERTY_L2_________________     CTL_A,   ALT_S,   GUI_D,   SFT_F,    KC_G
#define _____________3x5_QWERTY_L3_________________      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _____________3x5_QWERTY_R1_________________      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _____________3x5_QWERTY_R2_________________      KC_H,   SFT_J,   GUI_K,   ALT_L, CTL_SCL
#define _____________3x5_QWERTY_R3_________________      KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH

/*  Navigation */
#define _____________3x5_____NAV_L1________________   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SCLN
#define _____________3x5_____NAV_L2________________   CTL_ESC, KC_LALT, KC_LGUI, KC_LSFT, KC_MINS
#define _____________3x5_____NAV_L3________________   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_GRV

#define _____________3x5_____NAV_R1________________   KC_QUOT, KC_HOME, KC_PGDN, KC_PGUP,  KC_END
#define _____________3x5_____NAV_R2________________    KC_EQL, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT
#define _____________3x5_____NAV_R3________________   KC_BSLS,  DC_NXT,  IJ_BCK,  IJ_FWD,  DC_PRV

/* Numbers */
#define _____________3x5_____NUM_L1________________   XXXXXXX,    KC_7,    KC_8,    KC_9, KC_SCLN
#define _____________3x5_____NUM_L2________________    KC_ESC,    KC_4,    KC_5,    KC_6, KC_MINS
#define _____________3x5_____NUM_L3________________    KC_DOT,    KC_1,    KC_2,    KC_3,  KC_GRV

#define _____________3x5_____NUM_R1________________   KC_QUOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define _____________3x5_____NUM_R2________________    KC_EQL, KC_LSFT, KC_LGUI, KC_LALT, CTL_ESC
#define _____________3x5_____NUM_R3________________   KC_BSLS,  DC_NXT,  IJ_BCK,  IJ_FWD,  DC_PRV

/* Symbols */
#define _____________3x5_____SYM_L1________________     RESET, KC_VOLD, KC_MUTE, KC_VOLU, KC_COLN
#define _____________3x5_____SYM_L2________________     KC_LT, KC_LCBR, KC_LBRC, KC_LPRN, KC_UNDS
#define _____________3x5_____SYM_L3________________   XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, KC_TILD

#define _____________3x5_____SYM_R1________________   KC_DQUO, XXXXXXX, XXXXXXX, XXXXXXX,   RESET
#define _____________3x5_____SYM_R2________________   KC_PLUS, KC_RPRN, KC_RBRC, KC_RCBR,   KC_GT
#define _____________3x5_____SYM_R3________________   KC_PIPE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
