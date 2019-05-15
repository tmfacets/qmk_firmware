/* Kevin Grabbe (/u/tmfacets) <ke.grabb@gmail.com> May 2019       //
// I modified my MF68 for use at work. Favors the right-handed.   //
// We use Inventor Pro 2017, hence all the custom keycodes.       //
// The idea is plug & play functionality w/ the default shortcuts */

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _FN1 1
#define _NUM 2 //Double tap FN+RALT to toggle number entry
#define _NAV 3 //FN+RCTRL to OSL. Get RH back to mouse while hitting LH sequence
#define _PART 4
#define _SKCH 5
#define _ASSY 6
#define _DRAW 7
#define KC_ KC_TRNS

#define KC_X1 MO(_FN1)
#define KC_X2 TT(_FN2)
#define KC_X3 OSL(_NAV)
#define KC_X4 OSL(_PART)
#define KC_X5 OSL(_SKCH)
#define KC_X6 OSL(_ASSY)
#define KC_X7 OSL(_DRAW)
//Backlight Control
#define KC_BL1 BL_STEP
//#define KC_BL2 BL_BRTG
#define KC_BL3 BL_TOGG
#define KC_BL4 BL_INC
#define KC_BL5 BL_DEC


// Part Environment Shortcuts

// Assembly Environment Shortcuts

// Sketch Environment Shortcuts

// Drawing Environment Shortcuts



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_kc(
 /*,----+----+----+----+----+----+----+----+----+----+----+----+----+--------.  ,----+----. */
    ESC , 1  , 2  , 3  , 4  , 5  , 6  , 7  , 8  , 9  , 0  ,MINS,EQL ,  BSPC  ,   INS ,PGUP,
 /*|----`----`----`----`----`----`----`----`----`----`----`----`----`--------|  |----`----| */
    TAB   , Q  , W  , E  , R  , T  , Y  , U  , I  , O  , P  ,LBRC,RBRC, BSLS ,   DEL ,PGDN,
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
    GRV , F1 , F2 , F3 , F4 , F5 , F6 , F7 , F8 , F9 ,F10 ,F11 ,F12 ,   BSPC ,       ,HOME,
 /*|esc-`-1--`-2--`-3--`-4--`-5--`-6--`-7--`-8--`-9--`-0--`mnus`plus`--bksp--|  |ins-`pgup| */
          ,    ,    ,    ,    ,    ,    ,    ,    ,PSCR,SLCK,PAUS,CALC,      ,   BL3 ,END,
 /*|tab---`-q--`-w--`-e--`-r--`-t--`-y--`-u--`-i--`-o--`-p--`-{--`-}--`--|---|  `del-`pgdn' */
           ,    ,    ,    ,    ,    ,    ,    ,    ,    ,HOME,    ,          ,
 /*|caps---`-a--`-s--`-d--`-f--`-g--`-h--`-j--`-k--`-l--`-;--`-'--`----enter-|  ,----. */
             ,    ,    ,    ,    ,    ,VOLD,VOLU,MUTE,    ,END ,             ,   BL4 ,
 /*|shift----`-z--`-x--`-c--`-v--`-b--`-n--`-m--`-,--`-.--`-/--`-------shift-.--|-up-|----. */
         ,     ,     ,                              ,      , X2  , X3  ,        ,BL5 ,BL1
 /*`ctrl-+-gui-+-alt-+----------space---------------+-fn---+-alt-+ctrl-'   `left+down+rght' */
  ),

  [_NUM] = LAYOUT_kc(
 /*,----+----+----+----+----+----+----+----+----+----+----+----+----+--------.  ,----+----. */
        ,    ,    ,    ,    ,    ,    ,PSLS,PAST,PMNS,    ,    ,    ,   BSPC ,       ,HOME,
 /*|esc-`-1--`-2--`-3--`-4--`-5--`-6--`-7--`-8--`-9--`-0--`mnus`plus`--bksp--|  |ins-`pgup| */
          ,    ,    ,    ,    ,    , 7  , 8  , 9  ,PPLS,    ,    ,    ,      ,       ,END ,
 /*|tab---`-q--`-w--`-e--`-r--`-t--`-y--`-u--`-i--`-o--`-p--`-{--`-}--`--|---|  `del-`pgdn' */
           ,    ,    ,    ,    ,    , 4  , 5  , 6  ,PENT,    ,    ,          ,
 /*|caps---`-a--`-s--`-d--`-f--`-g--`-h--`-j--`-k--`-l--`-;--`-'--`----enter-|  ,----. */
             ,    ,    ,    ,    , 0  , 1  , 2  , 3  ,    ,    ,             ,       ,
 /*|shift----`-z--`-x--`-c--`-v--`-b--`-n--`-m--`-,--`-.--`-/--`-------shift-.--|-up-|----. */
         ,     ,     ,                              ,      ,     ,     ,        ,    ,    
 /*`ctrl-+-gui-+-alt-+----------space---------------+-fn---+-alt-+ctrl-'   `left+down+rght' */
  ),

  [_NAV] = LAYOUT_kc(
 /*,----+----+----+----+----+----+----+----+----+----+----+----+----+--------.  ,----+----. */
        ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,        ,       ,    ,
 /*|esc-`-1--`-2--`-3--`-4--`-5--`-6--`-7--`-8--`-9--`-0--`mnus`plus`--bksp--|  |ins-`pgup| */
          ,    ,    ,    ,    ,    ,    ,    ,    ,   ,    ,    ,    ,      ,       ,    ,
 /*|tab---`-q--`-w--`-e--`-r--`-t--`-y--`-u--`-i--`-o--`-p--`-{--`-}--`--|---|  `del-`pgdn' */
           ,    ,    ,    ,    ,    ,    ,    ,    ,   ,    ,    ,          ,
 /*|caps---`-a--`-s--`-d--`-f--`-g--`-h--`-j--`-k--`-l--`-;--`-'--`----enter-|  ,----. */
      X4     ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,             ,       ,
 /*|shift----`-z--`-x--`-c--`-v--`-b--`-n--`-m--`-,--`-.--`-/--`-------shift-.--|-up-|----. */
    X5   , X6  , X7  ,                              ,      ,     ,     ,        ,    ,    
 /*`ctrl-+-gui-+-alt-+----------space---------------+-fn---+-alt-+ctrl-'   `left+down+rght' */
  ),

  [_PART] = LAYOUT_kc(
 /*,----+----+----+----+----+----+----+----+----+----+----+----+----+--------.  ,----+----. */
        ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,        ,       ,    ,
 /*|esc-`-1--`-2--`-3--`-4--`-5--`-6--`-7--`-8--`-9--`-0--`mnus`plus`--bksp--|  |ins-`pgup| */
          ,    ,    ,    ,    ,    ,    ,    ,    ,   ,    ,    ,    ,      ,       ,    ,
 /*|tab---`-q--`-w--`-e--`-r--`-t--`-y--`-u--`-i--`-o--`-p--`-{--`-}--`--|---|  `del-`pgdn' */
           ,    ,    ,    ,    ,    ,    ,    ,    ,   ,    ,    ,          ,
 /*|caps---`-a--`-s--`-d--`-f--`-g--`-h--`-j--`-k--`-l--`-;--`-'--`----enter-|  ,----. */
      X4     ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,             ,       ,
 /*|shift----`-z--`-x--`-c--`-v--`-b--`-n--`-m--`-,--`-.--`-/--`-------shift-.--|-up-|----. */
    X5   , X6  , X7  ,                              ,      ,     ,     ,        ,    ,    
 /*`ctrl-+-gui-+-alt-+----------space---------------+-fn---+-alt-+ctrl-'   `left+down+rght' */
  ),

  [_SKCH] = LAYOUT_kc(
 /*,----+----+----+----+----+----+----+----+----+----+----+----+----+--------.  ,----+----. */
        ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,        ,       ,    ,
 /*|esc-`-1--`-2--`-3--`-4--`-5--`-6--`-7--`-8--`-9--`-0--`mnus`plus`--bksp--|  |ins-`pgup| */
          ,    ,    ,    ,    ,    ,    ,    ,    ,   ,    ,    ,    ,      ,       ,    ,
 /*|tab---`-q--`-w--`-e--`-r--`-t--`-y--`-u--`-i--`-o--`-p--`-{--`-}--`--|---|  `del-`pgdn' */
           ,    ,    ,    ,    ,    ,    ,    ,    ,   ,    ,    ,          ,
 /*|caps---`-a--`-s--`-d--`-f--`-g--`-h--`-j--`-k--`-l--`-;--`-'--`----enter-|  ,----. */
      X4     ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,             ,       ,
 /*|shift----`-z--`-x--`-c--`-v--`-b--`-n--`-m--`-,--`-.--`-/--`-------shift-.--|-up-|----. */
    X5   , X6  , X7  ,                              ,      ,     ,     ,        ,    ,    
 /*`ctrl-+-gui-+-alt-+----------space---------------+-fn---+-alt-+ctrl-'   `left+down+rght' */
  ),

  [_ASSY] = LAYOUT_kc(
 /*,----+----+----+----+----+----+----+----+----+----+----+----+----+--------.  ,----+----. */
        ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,        ,       ,    ,
 /*|esc-`-1--`-2--`-3--`-4--`-5--`-6--`-7--`-8--`-9--`-0--`mnus`plus`--bksp--|  |ins-`pgup| */
          ,    ,    ,    ,    ,    ,    ,    ,    ,   ,    ,    ,    ,      ,       ,    ,
 /*|tab---`-q--`-w--`-e--`-r--`-t--`-y--`-u--`-i--`-o--`-p--`-{--`-}--`--|---|  `del-`pgdn' */
           ,    ,    ,    ,    ,    ,    ,    ,    ,   ,    ,    ,          ,
 /*|caps---`-a--`-s--`-d--`-f--`-g--`-h--`-j--`-k--`-l--`-;--`-'--`----enter-|  ,----. */
      X4     ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,             ,       ,
 /*|shift----`-z--`-x--`-c--`-v--`-b--`-n--`-m--`-,--`-.--`-/--`-------shift-.--|-up-|----. */
    X5   , X6  , X7  ,                              ,      ,     ,     ,        ,    ,    
 /*`ctrl-+-gui-+-alt-+----------space---------------+-fn---+-alt-+ctrl-'   `left+down+rght' */
  ),

  [_DRAW] = LAYOUT_kc(
 /*,----+----+----+----+----+----+----+----+----+----+----+----+----+--------.  ,----+----. */
        ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,        ,       ,    ,
 /*|esc-`-1--`-2--`-3--`-4--`-5--`-6--`-7--`-8--`-9--`-0--`mnus`plus`--bksp--|  |ins-`pgup| */
          ,    ,    ,    ,    ,    ,    ,    ,    ,   ,    ,    ,    ,      ,       ,    ,
 /*|tab---`-q--`-w--`-e--`-r--`-t--`-y--`-u--`-i--`-o--`-p--`-{--`-}--`--|---|  `del-`pgdn' */
           ,    ,    ,    ,    ,    ,    ,    ,    ,   ,    ,    ,          ,
 /*|caps---`-a--`-s--`-d--`-f--`-g--`-h--`-j--`-k--`-l--`-;--`-'--`----enter-|  ,----. */
      X4     ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,             ,       ,
 /*|shift----`-z--`-x--`-c--`-v--`-b--`-n--`-m--`-,--`-.--`-/--`-------shift-.--|-up-|----. */
    X5   , X6  , X7  ,                              ,      ,     ,     ,        ,    ,    
 /*`ctrl-+-gui-+-alt-+----------space---------------+-fn---+-alt-+ctrl-'   `left+down+rght' */
  )
};
