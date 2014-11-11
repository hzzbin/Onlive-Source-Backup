#ifndef __SOFTKEYBOARD_MAIN_H__
#define __SOFTKEYBOARD_MAIN_H__

#include <linux/input.h>
#include "ir_key_def.h"

#define SOFTIR_READ	0x1234
#define SOFTIR_WRITE 	0x1235
#define IGNORE 0
#define SOFTIR_KEY_BUF_MAX_LEN 10
#define SUCCESS 0

#define IOCTL_SET_MSG _IOW(GALOIS_SOFT_KEYBOARD_MISC_MAJOR, SOFTIR_WRITE, char *)

typedef struct soft_keyboard_keymap {
	uint soft_keyboard_key;
	uint input_key;
}soft_keyboard_keymap_t;

soft_keyboard_keymap_t soft_keyboard_tab[] = {
	{MV_IR_KEY_NULL, 		KEY_RESERVED}, 	/* no key */
	
	{MV_IR_KEY_POWER,		KEY_POWER},
	{MV_IR_KEY_OPENCLOSE,		KEY_OPEN},

	/* digital keys */
	{MV_IR_KEY_DIGIT_1,		KEY_1},
	{MV_IR_KEY_DIGIT_2,		KEY_2},
	{MV_IR_KEY_DIGIT_2,		KEY_A},
	{MV_IR_KEY_DIGIT_2,		KEY_B},
	{MV_IR_KEY_DIGIT_2,		KEY_C},
	{MV_IR_KEY_DIGIT_3,		KEY_3},
	{MV_IR_KEY_DIGIT_3,		KEY_D},
	{MV_IR_KEY_DIGIT_3,		KEY_E},
	{MV_IR_KEY_DIGIT_3,		KEY_F},
	{MV_IR_KEY_DIGIT_4,		KEY_4},
	{MV_IR_KEY_DIGIT_4,		KEY_G},
	{MV_IR_KEY_DIGIT_4,		KEY_H},
	{MV_IR_KEY_DIGIT_4,		KEY_I},
	{MV_IR_KEY_DIGIT_5,		KEY_5},
	{MV_IR_KEY_DIGIT_5,		KEY_J},
	{MV_IR_KEY_DIGIT_5,		KEY_K},
	{MV_IR_KEY_DIGIT_5,		KEY_L},
	{MV_IR_KEY_DIGIT_6,		KEY_6},
	{MV_IR_KEY_DIGIT_6,		KEY_M},
	{MV_IR_KEY_DIGIT_6,		KEY_N},
	{MV_IR_KEY_DIGIT_6,		KEY_O},
	{MV_IR_KEY_DIGIT_7,		KEY_7},
	{MV_IR_KEY_DIGIT_7,		KEY_P},
	{MV_IR_KEY_DIGIT_7,		KEY_Q},
	{MV_IR_KEY_DIGIT_7,		KEY_R},
	{MV_IR_KEY_DIGIT_7,		KEY_S},
	{MV_IR_KEY_DIGIT_8,		KEY_8},
	{MV_IR_KEY_DIGIT_8,		KEY_T},
	{MV_IR_KEY_DIGIT_8,		KEY_U},
	{MV_IR_KEY_DIGIT_8,		KEY_V},
	{MV_IR_KEY_DIGIT_9,		KEY_9},
	{MV_IR_KEY_DIGIT_9,		KEY_W},
	{MV_IR_KEY_DIGIT_9,		KEY_X},
	{MV_IR_KEY_DIGIT_9,		KEY_Y},
	{MV_IR_KEY_DIGIT_9,		KEY_Z},
	{MV_IR_KEY_DIGIT_0,		KEY_0},
	{MV_IR_KEY_DIGIT_0,		KEY_SEMICOLON},
	{MV_IR_KEY_DIGIT_0,		KEY_APOSTROPHE},
	{MV_IR_KEY_DIGIT_0,		KEY_GRAVE},
	{MV_IR_KEY_DIGIT_0,		KEY_MINUS},
	{MV_IR_KEY_DIGIT_0,		KEY_EQUAL},
	{MV_IR_KEY_DIGIT_0,		KEY_COMMA},
	{MV_IR_KEY_DIGIT_0,		KEY_DOT},
	{MV_IR_KEY_DIGIT_0,		KEY_SLASH},
	{MV_IR_KEY_DIGIT_0,		KEY_BACKSLASH},
	{MV_IR_KEY_DIGIT_0,		KEY_SPACE},
	{MV_IR_KEY_DIGIT_0,		KEY_BACKSPACE},
	{MV_IR_KEY_DIGIT_0,		KEY_DELETE},
/*	{MV_IR_KEY_DIGIT_0,		KEY_TAB},*/
	{MV_IR_KEY_DIGIT_0,		KEY_LEFTBRACE},
	{MV_IR_KEY_DIGIT_0,		KEY_RIGHTBRACE},
	{MV_IR_KEY_DIGIT_0,		KEY_LEFTCTRL},
	{MV_IR_KEY_DIGIT_0,		KEY_RIGHTCTRL},
	{MV_IR_KEY_DIGIT_0,		KEY_LEFTALT},
	{MV_IR_KEY_DIGIT_0,		KEY_RIGHTALT},
	{MV_IR_KEY_DIGIT_0,		KEY_LEFTSHIFT},
	{MV_IR_KEY_DIGIT_0,		KEY_RIGHTSHIFT},
	{MV_IR_KEY_DIGIT_0,		KEY_CAPSLOCK},

	/* for BD */
	{MV_IR_KEY_INFO,		KEY_INFO},
	{MV_IR_KEY_SETUPMENU,		KEY_HOME},
	{MV_IR_KEY_CANCEL, 		KEY_CANCEL},	/* no key */

	{MV_IR_KEY_DISCMENU,		KEY_CONTEXT_MENU},
	{MV_IR_KEY_TITLEMENU,		KEY_TITLE},
	{MV_IR_KEY_SUBTITLE,		KEY_SUBTITLE},
	{MV_IR_KEY_ANGLE,		KEY_ANGLE},
	{MV_IR_KEY_AUDIO,		KEY_AUDIO},
	{MV_IR_KEY_SEARCH,		KEY_SEARCH},
	{MV_IR_KEY_ZOOM,		KEY_ZOOM},
	{MV_IR_KEY_DISPLAY,		KEY_SCREEN},

	{MV_IR_KEY_REPEAT,		KEY_MEDIA_REPEAT},
	{MV_IR_KEY_REPEAT_AB,		KEY_AB},
	{MV_IR_KEY_MARKER,		KEY_MARKER},
	{MV_IR_KEY_EXIT,		KEY_EXIT},
	{MV_IR_KEY_A,			KEY_RED},
	{MV_IR_KEY_B,			KEY_GREEN},
	{MV_IR_KEY_C,			KEY_YELLOW},
	{MV_IR_KEY_D,			KEY_BLUE},

	/* IR misc around ENTER */
	{MV_IR_KEY_CLEAR,		KEY_CLEAR},
	{MV_IR_KEY_VIDEO_FORMAT,	KEY_VIDEO},
	{MV_IR_KEY_STEP,		KEY_STEP},
	{MV_IR_KEY_RETURN,		KEY_ESC},

	/* up down left right enter */
	{MV_IR_KEY_UP,			KEY_UP},
	{MV_IR_KEY_DOWN,		KEY_DOWN},
	{MV_IR_KEY_LEFT,		KEY_LEFT},
	{MV_IR_KEY_RIGHT,		KEY_RIGHT},
	{MV_IR_KEY_ENTER,		KEY_ENTER},

	/* for BD */
	{MV_IR_KEY_SLOW,		KEY_SLOW},
	{MV_IR_KEY_PAUSE,		KEY_PAUSE},
	{MV_IR_KEY_PLAY,		KEY_PLAY},
	{MV_IR_KEY_STOP,		KEY_STOP},
	{MV_IR_KEY_PLAY_PAUSE, 		KEY_PLAYPAUSE},	/* no key */

	{MV_IR_KEY_SKIP_BACKWARD,	KEY_PREVIOUS},
	{MV_IR_KEY_SKIP_FORWARD,	KEY_NEXT},
	{MV_IR_KEY_SLOW_BACKWARD, 	KEY_RESERVED},	/* no key */
	{MV_IR_KEY_SLOW_FORWARD,  	KEY_RESERVED},	/* no key */
	{MV_IR_KEY_FAST_BACKWARD,	KEY_REWIND},
	{MV_IR_KEY_FAST_FORWARD,	KEY_FORWARD},

	/* bottom keys */
	{MV_IR_KEY_F1,			KEY_TAB},
	//{MV_IR_KEY_F1,			KEY_F1},
	{MV_IR_KEY_F2,			KEY_F2},
	{MV_IR_KEY_F3,			KEY_F3},
	{MV_IR_KEY_F4,			KEY_F4},
	{MV_IR_KEY_F5,			KEY_F5},
	{MV_IR_KEY_F6,			KEY_F6},
	{MV_IR_KEY_F7,			KEY_F7},
	{MV_IR_KEY_F8,			KEY_F8},

	/* for future */
	{MV_IR_KEY_VOL_PLUS, 		KEY_VOLUMEUP},		/* no key */
	{MV_IR_KEY_VOL_MINUS, 		KEY_VOLUMEDOWN},	/* no key */
	{MV_IR_KEY_VOL_MUTE, 		KEY_MUTE},			/* no key */
	{MV_IR_KEY_CHANNEL_PLUS, 	KEY_CHANNELUP},		/* no key */
	{MV_IR_KEY_CHANNEL_MINUS, 	KEY_CHANNELDOWN},	/* no key */

	/* obsoleted keys */
	{MV_IR_KEY_MENU,		KEY_MENU},
	{MV_IR_KEY_INPUTSEL,		KEY_RESERVED},
	{MV_IR_KEY_ANYNET,		KEY_RESERVED},
	{MV_IR_KEY_TELEVISION,		KEY_TV},
	{MV_IR_KEY_CHANNEL_LIST,	KEY_RESERVED},
	{MV_IR_KEY_TVPOWER,		KEY_RESERVED},
};
#endif