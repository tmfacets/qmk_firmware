
/* Kevin Grabbe (/u/tmfacets) <ke.grabb@gmail.com> Jul 2020 */

#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _FN1 1
#define _NUM 2 //Double tap FN+RALT to toggle number entry
#define _REC 3

#define KC_ KC_TRNS
#define KC_X1 MO(_FN1)
#define KC_X2 TT(_NUM)
#define KC_X3 MO(_REC)

//Backlight Control
#define KC_BL1 BL_STEP
//#define KC_BL2 BL_BRTG //I want to use breathing to indicate numpad active
#define KC_BL3 BL_TOGG
#define KC_BL4 BL_INC
#define KC_BL5 BL_DEC

//I believe redefining these will overwrite them
#define KC_D1 KC_TRNS
#define KC_D2 KC_TRNS
#define KC_R1 KC_TRNS
#define KC_R2 KC_TRNS
#define KC_RSTP KC_TRNS

#ifdef DYNAMIC_MACROS_H
#define KC_D1 DM_PLY1
#define KC_D2 DM_PLY2
#define KC_R1 DM_REC1
#define KC_R2 DM_REC2
#define KC_RSTP DM_RSTP
#endif //DYNAMIC_MACROS_H

enum custom_keycodes {
  KC_M0 = SAFE_RANGE,
  KC_M1,
  KC_M2,
  KC_M3,
  KC_M4,
  KC_M5,
  KC_M6,
  KC_M7,
  KC_M8,
  KC_M9,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_kc(
 /*,----+----+----+----+----+----+----+----+----+----+----+----+----+--------.  ,----+----. */
    ESC , 1  , 2  , 3  , 4  , 5  , 6  , 7  , 8  , 9  , 0  ,MINS,EQL ,  BSPC  ,    M0 , M1 ,
 /*|----`----`----`----`----`----`----`----`----`----`----`----`----`--------|  |----`----| */
    TAB   , Q  , W  , E  , R  , T  , Y  , U  , I  , O  , P  ,LBRC,RBRC, BSLS ,    M2 , M3 ,
 /*|------`----`----`----`----`----`----`----`----`----`----`----`----`------|  `----`----' */
    CAPS   , A  , S  , D  , F  , G  , H  , J  , K  , L  ,SCLN,QUOT,    ENTER ,
 /*|-------`----`----`----`----`----`----`----`----`----`----`----`----------|  ,----. */
    LSFT     , Z  , X  , C  , V  , B  , N  , M  ,COMM,DOT ,SLSH,       RSFT  ,    UP ,
 /*|---------`----`----`----`----`----`----`----`----`----`----`-------------.--|----|----. */
    LCTL ,LGUI ,LALT ,            SPACE             ,  X1  ,RALT ,RCTL ,    LEFT,DOWN,RGHT
 /*`-----+-----+-----+------------------------------+------+-----+-----'   `----+----+----' */
  ),

  [_FN1] = LAYOUT_kc(
 /*,----+----+----+----+----+----+----+----+----+----+----+----+----+--------.  ,----+----. */
    GRV , F1 , F2 , F3 , F4 , F5 , F6 , F7 , F8 , F9 ,F10 ,F11 ,F12 ,   DEL  ,    M8 , D1 ,
 /*|esc-`-1--`-2--`-3--`-4--`-5--`-6--`-7--`-8--`-9--`-0--`mnus`plus`--bksp--|  |ins-`pgup| */
          ,    ,BL4 ,    ,    ,    ,    ,    ,    ,PSCR,SLCK,PAUS,CALC,      ,    M9 , D2 ,
 /*|tab---`-q--`-w--`-e--`-r--`-t--`-y--`-u--`-i--`-o--`-p--`-{--`-}--`--|---|  `del-`pgdn' */
           ,BL3 ,BL5 ,BL1 ,    ,    ,    ,    ,    ,    ,    ,    ,          ,
 /*|caps---`-a--`-s--`-d--`-f--`-g--`-h--`-j--`-k--`-l--`-;--`-'--`----enter-|  ,----. */
             ,    ,    ,    ,    ,    ,VOLD,VOLU,MUTE,RSTP,    ,             ,   PGUP,
 /*|shift----`-z--`-x--`-c--`-v--`-b--`-n--`-m--`-,--`-.--`-/--`-------shift-.--|-up-|----. */
         ,     ,     ,                              ,      , X2  , X3  ,    HOME,PGDN,END
 /*`ctrl-+-gui-+-alt-+----------space---------------+-fn---+-alt-+ctrl-'   `left+down+rght' */
  ),

  [_NUM] = LAYOUT_kc(
 /*,----+----+----+----+----+----+----+----+----+----+----+----+----+--------.  ,----+----. */
        ,    ,    ,    ,    ,    ,    ,PSLS,PAST,PMNS,    ,    ,    ,        ,    M4 , M5 ,
 /*|esc-`-1--`-2--`-3--`-4--`-5--`-6--`-7--`-8--`-9--`-0--`mnus`plus`--bksp--|  |ins-`pgup| */
          ,    ,    ,    ,    ,    , 7  , 8  , 9  ,PPLS,    ,    ,    ,      ,    M6 , M7 ,
 /*|tab---`-q--`-w--`-e--`-r--`-t--`-y--`-u--`-i--`-o--`-p--`-{--`-}--`--|---|  `del-`pgdn' */
           ,    ,    ,    ,    ,    , 4  , 5  , 6  ,PENT,    ,    ,          ,
 /*|caps---`-a--`-s--`-d--`-f--`-g--`-h--`-j--`-k--`-l--`-;--`-'--`----enter-|  ,----. */
             ,    ,    ,    ,    , 0  , 1  , 2  , 3  ,    ,    ,             ,       ,
 /*|shift----`-z--`-x--`-c--`-v--`-b--`-n--`-m--`-,--`-.--`-/--`-------shift-.--|-up-|----. */
         ,     ,     ,                              ,      ,     ,     ,        ,    ,    
 /*`ctrl-+-gui-+-alt-+----------space---------------+-fn---+-alt-+ctrl-'   `left+down+rght' */
  ),
  
  [_REC] = LAYOUT_kc(
 /*,----+----+----+----+----+----+----+----+----+----+----+----+----+--------.  ,----+----. */
        ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,        ,       , R1 ,
 /*|esc-`-1--`-2--`-3--`-4--`-5--`-6--`-7--`-8--`-9--`-0--`mnus`plus`--bksp--|  |ins-`pgup| */
          ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,      ,       , R2 ,
 /*|tab---`-q--`-w--`-e--`-r--`-t--`-y--`-u--`-i--`-o--`-p--`-{--`-}--`--|---|  `del-`pgdn' */
           ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,          ,
 /*|caps---`-a--`-s--`-d--`-f--`-g--`-h--`-j--`-k--`-l--`-;--`-'--`----enter-|  ,----. */
             ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,             ,       ,
 /*|shift----`-z--`-x--`-c--`-v--`-b--`-n--`-m--`-,--`-.--`-/--`-------shift-.--|-up-|----. */
         ,     ,     ,                              ,      ,     ,     ,        ,    ,    
 /*`ctrl-+-gui-+-alt-+----------space---------------+-fn---+-alt-+ctrl-'   `left+down+rght' */
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case KC_M0:
    if (record->event.pressed) {
      // when keycode is pressed
      SEND_STRING("Good morning,");
    } else {
      // when keycode is released
    }
    break;
  case KC_M1:
    if (record->event.pressed) {
      // when keycode is pressed
      SEND_STRING("Good afternoon,");
    } else {
      // when keycode is released
    }
    break;
  case KC_M2:
    if (record->event.pressed) {
      // when keycode is pressed
      SEND_STRING("Good evening,");
    } else {
      // when keycode is released
    }
    break;
  case KC_M3:
    if (record->event.pressed) {
      // when keycode is pressed
      SEND_STRING("Thanks,");
    } else {
      // when keycode is released
    }
    break;
  case KC_M4:
    if (record->event.pressed) {
      // when keycode is pressed
      SEND_STRING("Checked!\nPlease see the attachments for markup, and Trello for the summary of changes.");
    } else {
      // when keycode is released
    }
    break;
  case KC_M5:
    if (record->event.pressed) {
      // when keycode is pressed
      SEND_STRING("The acknowledgement drawing is attached. Please let me know if there's anything else you need.");
    } else {
      // when keycode is released
    }
    break;
  case KC_M6:
    if (record->event.pressed) {
      // when keycode is pressed
      SEND_STRING("Please enter data for the attached drawing. This has X priority.");
    } else {
      // when keycode is released
    }
    break;
  case KC_M7:
    if (record->event.pressed) {
      // when keycode is pressed
      SEND_STRING("Kevin Grabbe");
    } else {
      // when keycode is released
    }
    break;
  case KC_M8:
    if (record->event.pressed) {
      // when keycode is pressed
      SEND_STRING("Dwg rel after rev");
    } else {
      // when keycode is released
    }
    break;
  case KC_M9:
    if (record->event.pressed) {
      // when keycode is pressed
      SEND_STRING("Full rel after rev");
    } else {
      // when keycode is released
    }
    break;
  }
  return true;
};

//Backlight layer feedback based on snip from <https://github.com/loadedsith>
bool has_layer_changed = true;

void matrix_scan_user(void) {
  uint8_t layer = biton32(layer_state);
  static uint8_t old_layer = 0;
  
  if (old_layer != layer) {
    has_layer_changed = true;
    old_layer = layer;
  }
  
  if (has_layer_changed) {
    has_layer_changed = false;

    switch (layer) {
      case _NUM:
        breathing_enable();
        breathing_period_set(2);
      break;
      default:
        breathing_disable();
    }
  }
};

//Default backlight level
void matrix_init_user(void) {
  breathing_period_set(2);
  breathing_pulse();
  breathing_disable();
  backlight_level(3);
};
