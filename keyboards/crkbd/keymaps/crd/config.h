#pragma once

#ifdef COMBO_ENABLE
    #define COMBO_ALLOW_ACTION_KEYS
    #define COMBO_VARIABLE_LEN
    #define COMBO_TERM 50
#endif

#ifdef OLED_DRIVER_ENABLE
    #define SSD1306OLED
    #define OLED_DISABLE_TIMEOUT
    #define OLED_FONT_H "keyboards/crkbd/keymaps/drashna/glcdfont.c"
#endif