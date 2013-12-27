#ifndef KEYMAP_H
#define KEYMAP_H

#include <avr/pgmspace.h>

#define MX3018
//#define PS2AVR

#define MAX_COL     6
#define MAX_ROW     18

#define MAX_LAYER   8

// Total 132 keys + one none
#define NUM_KEY         212

#define KEY_M48         236
#define KEY_M49         237
#define KEY_M50         238
#define KEY_LED0        239
#define KEY_LED1        240
#define KEY_LED2        241
#define KEY_LED3        242
#define KEY_LED4        243
#define KEY_LED5        244
#define KEY_LED6        245
#define KEY_LED7        246

#define KEY_L0          247
#define KEY_L1          248
#define KEY_L2          249
#define KEY_L3          250
#define KEY_L4          251
#define KEY_L5          252
#define KEY_L6          253

#define KEY_RESET       254
#define KEY_FN          255



/// Codes for modifier-keys.
typedef enum modifiers {
    MOD_NONE          = 0,
    MOD_CONTROL_LEFT  = (1 << 0),
    MOD_SHIFT_LEFT    = (1 << 1),
    MOD_ALT_LEFT      = (1 << 2),
    MOD_GUI_LEFT      = (1 << 3),
    MOD_CONTROL_RIGHT = (1 << 4),
    MOD_SHIFT_RIGHT   = (1 << 5),
    MOD_ALT_RIGHT     = (1 << 6),
    MOD_GUI_RIGHT     = (1 << 7),
} MODIFIERS;


enum {
	KEY_NONE=0,
    ErrorRollOver,
    POSTFail,
    ErrorUndefined,

    KEY_A,                // 0x04
    KEY_B,
    KEY_C,
    KEY_D,
    KEY_E,
    KEY_F,
    KEY_G,
    KEY_H,
    KEY_I,
    KEY_J,
    KEY_K,
    KEY_L,

    KEY_M,                // 0x10
    KEY_N,
    KEY_O,
    KEY_P,
    KEY_Q,
    KEY_R,
    KEY_S,
    KEY_T,
    KEY_U,
    KEY_V,
    KEY_W,
    KEY_X,
    KEY_Y,
    KEY_Z,
    KEY_1,                //       1 and !
    KEY_2,                //       2 and @

    KEY_3,                // 0x20  3 and #
    KEY_4,                //       4 and $
    KEY_5,                //       5 and %
    KEY_6,                //       6 and ^
    KEY_7,                //       7 and &
    KEY_8,                //       8 and *
    KEY_9,                //       9 and (
    KEY_0,                // 0x27  0 and )
    KEY_ENTER,           // 0x28  enter
    KEY_ESC,           // 0x29
    KEY_BKSP,           // 0x2A  backspace
    KEY_TAB,              // 0x2B
    KEY_SPACE,         // 0x2C
    KEY_MINUS,            // 0x2D  - and _
    KEY_EQUAL,           // 0x2E  = and +
    KEY_LBR,         // 0x2F  [ and {

    KEY_RBR,         // 0x30  ] and }
    KEY_BKSLASH,        // 0x31  \ and |
    KEY_Europe1,             // 0x32  non-US # and ~
    KEY_COLON,        // 0x33  ; and :
    KEY_QUOTE,        // 0x34  ' and "
    KEY_HASH,            // 0x35  grave accent and tilde
    KEY_COMMA,            // 0x36  , and <
    KEY_DOT,              // 0x37  . and >
    KEY_SLASH,            // 0x38  / and ?
    KEY_CAPS,         // 0x39
    KEY_F1,
    KEY_F2,
    KEY_F3,
    KEY_F4,
    KEY_F5,
    KEY_F6,

    KEY_F7,               // 0x40
    KEY_F8,
    KEY_F9,
    KEY_F10,
    KEY_F11,
    KEY_F12,
    KEY_PRNSCR,
    KEY_SCRLCK,
    KEY_PAUSE,            //Break
    KEY_INSERT,
    KEY_HOME,
    KEY_PGUP,
    KEY_DEL,
    KEY_END,
    KEY_PGDN,
    KEY_RIGHT,
    
    KEY_LEFT,        // 0x50
    KEY_DOWN,
    KEY_UP,
    KEY_NUMLOCK,          //       Clear
    KEY_KP_SLASH,
    KEY_KP_AST,
    KEY_KP_MINUS,
    KEY_KP_PLUS,
    KEY_KP_ENTER,
    KEY_KP_1,              //       End
    KEY_KP_2,              //       Down Arrow
    KEY_KP_3,              //       Page Down
    KEY_KP_4,              //       Left Arrow
    KEY_KP_5,
    KEY_KP_6,              //       Right Arrow
    KEY_KP_7,              //       Home
    
    KEY_KP_8,              // 0x60  Up Arrow
    KEY_KP_9,              //       Page Up
    KEY_KP_0,              //       Insert
    KEY_KP_DOT,             //       Delete
    KEY_Europe2,             //       non-US \ and |
    KEY_APPS,		        // 102
    KEY_POWER_HID,
    KEY_KP_EQUAL,
    KEY_F13,
    KEY_F14,
    KEY_F15,
    KEY_F16,
    KEY_F17,
    KEY_F18,
    KEY_F19,
    KEY_F20,

    KEY_F21,        // 0x70
    KEY_F22,
    KEY_F23,
    KEY_F24,
    KEY_EXECUTE,
    KEY_HELP,
    KEY_MENU,
    KEY_SEL,
    KEY_STOP_HID,
    KEY_AGAIN,
    KEY_UNDO,
    KEY_CUT,
    KEY_COPY,
    KEY_PASTE,
    KEY_FIND,
    KEY_MUTE_HID,
    
    KEY_VOLUP,      // 0x80
    KEY_VOLDN,
    KEY_KL_CAP,
    KEY_KL_NUM,
    KEY_KL_SCL,
    KEY_KP_COMMA,
    KEY_EQUAL_SIGN,
    KEY_INTL1,
    KEY_INTL2,
    KEY_INTL3,
    KEY_INTL4,
    KEY_INTL5,
    KEY_INTL6,
    KEY_INTL7,
    KEY_INTL8,
    KEY_INTL9,
    
    KEY_HANJA,      // 0x90
    KEY_HANGLE,
    KEY_KATA,
    KEY_HIRA,
    KEY_LANG5,
    KEY_LANG6,
    KEY_LANG7,
    KEY_LANG8,
    KEY_LANG9,
    KEY_ALT_ERASE,
    KEY_SYSREQ,
    KEY_CANCEL,
    KEY_CLEAR,
    KEY_PRIOR,
    KEY_RETURN,
    KEY_SPERATOR,
    
    KEY_OUT,        // 0xA0
    KEY_OPER,
    KEY_CLR_AGIN,
    KEY_CRSEL,
    KEY_EXCEL,
    
	 /* These are NOT standard USB HID - handled specially in decoding, 
     so they will be mapped to the modifier byte in the USB report */
	KEY_Modifiers,
	KEY_LCTRL,    // 0x01
	KEY_LSHIFT,   // 0x02
	KEY_LALT,     // 0x04
	KEY_LGUI,     // 0x08
	KEY_RCTRL,    // 0x10
	KEY_RSHIFT,   // 0x20
	KEY_RALT,     // 0x40
	KEY_RGUI,     // 0x80
	KEY_Modifiers_end,

    KEY_RESERVED,
    KEY_00  = 0xB0,
    KEY_000,

    KEY_Consumers,
    KEY_NEXT_TRK,
    KEY_PREV_TRK,
    KEY_STOP,
    KEY_PLAY,
    KEY_MUTE,
    KEY_BASS_BST,
    KEY_LOUDNESS,
    KEY_VOL_UP,
    KEY_VOL_DOWN,
    KEY_BASS_UP,
    KEY_BASS_DN,
    KEY_TRE_UP,
    KEY_TRE_DN,
    KEY_MEDIA_SEL,
    KEY_MAIL,
    KEY_CALC,
    KEY_MYCOM,
    KEY_WWW_SEARCH,
    KEY_WWW_HOME,
    KEY_WWW_BACK,
    KEY_WWW_FORWARD,
    KEY_WWW_STOP,
    KEY_WWW_REFRESH,
    KEY_WWW_FAVORITE,
    KEY_EJECT,
    KEY_SCREENSAVE,
    KEY_REC,
	KEY_REWIND,
	KEY_MINIMIZE,

    KEY_System,
    KEY_POWER,
    KEY_SLEEP,
    KEY_WAKE,
};

/* Generic Desktop Page(0x01) - system power control */
#define SYSTEM_POWER_DOWN       0x0081
#define SYSTEM_SLEEP            0x0082
#define SYSTEM_WAKE_UP          0x0083

/* Consumer Page(0x0C)
 * following are supported by Windows: http://msdn.microsoft.com/en-us/windows/hardware/gg463372.aspx
 */
#define AUDIO_MUTE              0x00E2
#define AUDIO_VOL_UP            0x00E9
#define AUDIO_VOL_DOWN          0x00EA
#define TRANSPORT_NEXT_TRACK    0x00B5
#define TRANSPORT_PREV_TRACK    0x00B6
#define TRANSPORT_STOP          0x00B7
#define TRANSPORT_STOP_EJECT    0x00CC
#define TRANSPORT_PLAY_PAUSE    0x00CD
/* application launch */
#define AL_CC_CONFIG            0x0183
#define AL_EMAIL                0x018A
#define AL_CALCULATOR           0x0192
#define AL_LOCAL_BROWSER        0x0194
/* application control */
#define AC_SEARCH               0x0221
#define AC_HOME                 0x0223
#define AC_BACK                 0x0224
#define AC_FORWARD              0x0225
#define AC_STOP                 0x0226
#define AC_REFRESH              0x0227
#define AC_BOOKMARKS            0x022A
/* supplement for Bluegiga iWRAP HID(not supported by Windows?) */
#define AL_LOCK                 0x019E
#define TRANSPORT_RECORD        0x00B2
#define TRANSPORT_REWIND        0x00B4
#define TRANSPORT_EJECT         0x00B8
#define AC_MINIMIZE             0x0206


/* keycode to system usage */
#define KEYCODE2SYSTEM(key) \
    (key == KEY_POWER ? SYSTEM_POWER_DOWN : \
    (key == KEY_SLEEP ? SYSTEM_SLEEP : \
    (key == KEY_WAKE  ? SYSTEM_WAKE_UP : 0)))

/* keycode to consumer usage */
#define KEYCODE2CONSUMER(key) \
    (key == KEY_MUTE       ?  AUDIO_MUTE : \
    (key == KEY_VOL_UP     ?  AUDIO_VOL_UP : \
    (key == KEY_VOL_DOWN   ?  AUDIO_VOL_DOWN : \
    (key == KEY_NEXT_TRK ?  TRANSPORT_NEXT_TRACK : \
    (key == KEY_PREV_TRK ?  TRANSPORT_PREV_TRACK : \
    (key == KEY_STOP       ?  TRANSPORT_STOP : \
    (key == KEY_EJECT      ?  TRANSPORT_STOP_EJECT : \
    (key == KEY_PLAY ?  TRANSPORT_PLAY_PAUSE : \
    (key == KEY_MEDIA_SEL     ?  AL_CC_CONFIG : \
    (key == KEY_MAIL             ?  AL_EMAIL : \
    (key == KEY_CALC       ?  AL_CALCULATOR : \
    (key == KEY_MYCOM      ?  AL_LOCAL_BROWSER : \
    (key == KEY_WWW_SEARCH       ?  AC_SEARCH : \
    (key == KEY_WWW_HOME         ?  AC_HOME : \
    (key == KEY_WWW_BACK         ?  AC_BACK : \
    (key == KEY_WWW_FORWARD      ?  AC_FORWARD : \
    (key == KEY_WWW_STOP         ?  AC_STOP : \
    (key == KEY_WWW_REFRESH      ?  AC_REFRESH : \
    (key == KEY_WWW_FAVORITE    ?  AC_BOOKMARKS : 0)))))))))))))))))))
    


#define KFLA_EXTEND 		0x01
#define KFLA_SPECIAL		0x02
#define KFLA_MAKEONLY		0x04
#define KFLA_MAKE_BREAK		0x08
#define KFLA_PROC_SHIFT		0x10


extern const uint8_t PROGMEM keycode_set2[];
extern uint8_t KFLA[];
extern const uint8_t PROGMEM keycode_set2_special[];
extern const uint8_t PROGMEM keycode_set2_makeonly[];
extern const uint8_t PROGMEM keycode_set2_make_break[];
extern const uint8_t PROGMEM keycode_set2_extend[];
extern const uint8_t PROGMEM keycode_set2_proc_shift[];
extern const uint8_t PROGMEM keymap_code[MAX_LAYER][MAX_COL][MAX_ROW];
extern uint8_t* keymap[MAX_LAYER];

#endif
