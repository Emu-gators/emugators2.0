#ifndef WIN_INPUT_H
#define WIN_INPUT_H

#include "dinput.h"

#define CMD_KEY_MASK			0xff
#define CMD_KEY_LSHIFT			(1<<16)
#define CMD_KEY_RSHIFT			(1<<17)
#define CMD_KEY_SHIFT			(CMD_KEY_LSHIFT|CMD_KEY_RSHIFT)
#define CMD_KEY_LCTRL			(1<<18)
#define CMD_KEY_RCTRL			(1<<19)
#define CMD_KEY_CTRL			(CMD_KEY_LCTRL|CMD_KEY_RCTRL)
#define CMD_KEY_LALT			(1<<20)
#define CMD_KEY_RALT			(1<<21)
#define CMD_KEY_ALT				(CMD_KEY_LALT|CMD_KEY_RALT)
#define CMD_KEY_LWIN			(1<<22)
#define CMD_KEY_RWIN			(1<<23)
#define CMD_KEY_WIN				(CMD_KEY_LWIN|CMD_KEY_RWIN)

void ConfigInput(HWND hParent);
int InitDInput(void);
void InitInputStuff(void);
void DestroyInput(void);
void SetAutoFireDesynch(int DesynchOn);
int GetAutoFireDesynch();
uint32 GetGamepadPressedImmediate();
void UpdateRawInputAndHotkeys();

extern LPDIRECTINPUT7 lpDI;

extern int InputType[3];
//extern int UsrInputType[3];
extern int cidisabled;
extern uint8 BWorldData[1 + 13 + 1];

#ifndef _aosdfjk02fmasf
#define _aosdfjk02fmasf

#include "../common/args.h"
#include "../common/config.h"
#include "../../input.h"

#define MAXBUTTCONFIG   4
typedef struct {
        uint8  ButtType[MAXBUTTCONFIG];
        uint8  DeviceNum[MAXBUTTCONFIG];
        int ButtonNum[MAXBUTTCONFIG];
        uint32 NumC;
        GUID DeviceInstance[MAXBUTTCONFIG];
        //uint64 DeviceID[MAXBUTTCONFIG];        /* TODO */
} ButtConfig;

extern CFGSTRUCT InputConfig[];
extern ARGPSTRUCT InputArgs[];
void ParseGIInput(FCEUGI *GameInfo);

#define BUTTC_KEYBOARD          0x00
#define BUTTC_JOYSTICK          0x01
#define BUTTC_MOUSE             0x02

#define FCFGD_GAMEPAD   1
#define FCFGD_POWERPAD  2
#define FCFGD_HYPERSHOT 3
#define FCFGD_QUIZKING  4

int FCEUD_TestCommandState(int c);
void FCEUD_UpdateInput();
int DWaitButton(HWND hParent, const char *text, ButtConfig *bc);
int DTestButton(ButtConfig *bc, uint8_t just_down = 0, uint8_t block_meta = 0);
char *MakeButtString(ButtConfig *bc, int appendKB = 1);

extern CFGSTRUCT HotkeyConfig[];

extern ButtConfig FCEUD_CommandMapping[EMUCMD_MAX];

#endif

#endif
