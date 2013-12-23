
#define LED_PRT_PORT        (uint8_t *const)&PORTD
#define LED_PRT_PIN			2

#define LED_NUM_PORT        (uint8_t *const)&PORTD
#define LED_NUM_PIN			3

#define LED_CAP_PORT        (uint8_t *const)&PORTD
#define LED_CAP_PIN			4

#define LED_SCR_PORT        (uint8_t *const)&PORTD
#define LED_SCR_PIN			5



#define LED_BLOCK_WASD_PORT       (uint8_t *const)&PORTB
#define LED_BLOCK_WASD_PIN        7

#define LED_BLOCK_PAD_PORT        (uint8_t *const)&PORTB
#define LED_BLOCK_PAD_PIN         4

#define LED_BLOCK_ARROW18_PORT          (uint8_t *const)&PORTB
#define LED_BLOCK_ARROW18_PIN           6

#define LED_BLOCK_ARROW30_PORT          (uint8_t *const)&PORTB
#define LED_BLOCK_ARROW30_PIN           5


#define LED_BLOCK_Fx_PORT         (uint8_t *const)&PORTE
#define LED_BLOCK_Fx_PIN          3

#define LED_BLOCK_FULL_PORT       (uint8_t *const)&PORTE
#define LED_BLOCK_FULL_PIN        4

#define LED_BLOCK_ESC_PORT        (uint8_t *const)&PORTE
#define LED_BLOCK_ESC_PIN         5




typedef enum
{
    LED_BLOCK_NUMLOCK,            // On/Off
    LED_BLOCK_CAPSLOCK,           // On/Off
    LED_BLOCK_SCROLLOCK,          // On/Off
    LED_BLOCK_PRT,                // On/Off
    
    LED_BLOCK_ESC,
    LED_BLOCK_Fx,
    LED_BLOCK_PAD,
    LED_BLOCK_FULL,
    LED_BLOCK_WASD,                   
    LED_BLOCK_ARROW18,
    LED_BLOCK_ARROW30,
    LED_BLOCK_ALL
}LED_BLOCK;    

typedef enum
{
    LED_EFFECT_FADING          = 0,
    LED_EFFECT_FADING_PUSH_ON  = 1,
    LED_EFFECT_PUSHED_LEVEL    = 2,
    LED_EFFECT_PUSH_ON         = 3,
    LED_EFFECT_PUSH_OFF        = 4,
    LED_EFFECT_ALWAYS          = 5,
    LED_EFFECT_FULLCAPS        = 6,
    LED_EFFECT_OFF             = 7,
    LED_EFFECT_NONE
}LED_MODE;

#define LED_NUM     0x01  ///< num LED on a boot-protocol keyboard
#define LED_CAPS    0x02  ///< caps LED on a boot-protocol keyboard
#define LED_SCROLL  0x04  ///< scroll LED on a boot-protocol keyboard
#define LED_COMPOSE 0x08  ///< compose LED on a boot-protocol keyboard
#define LED_KANA    0x10  ///< kana LED on a boot-protocol keyboard

extern LED_MODE led_mode;
extern uint8_t LEDstate;     ///< current state of the LEDs
extern uint8_t ledmodeIndex;
extern uint8_t ledmode[9][11];
void led_blink(int matrixState);
void led_fader(void);
void led_check(uint8_t forward);
void led_3lockupdate(uint8_t LEDstate);
void led_mode_init(void);
void led_mode_change (LED_BLOCK ledblock, int mode);
void led_pushed_level_cal(void);

void led_on(LED_BLOCK block);
void led_off(LED_BLOCK block);