/**
 * FUN_00128f70.c
 * Source line: 130385
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00128f70(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    pcVar2 = *(code **)(uVar3 * 4 + 0xae0f94);
    if ((uVar3 < 0x10) && ((uRam00974f74 >> (uVar3 & 0xff) & 1) != 0 && pcVar2 != NULL)) {
      iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
      (*pcVar2)(*(undefined4 *)(iVar1 + uVar3 * 4));
    }
    uVar3 += 1;
  } while ((int)uVar3 < 0x10);
  return;
}
