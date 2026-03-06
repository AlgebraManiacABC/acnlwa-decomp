/**
 * FUN_00459384.c
 * Source line: 622808
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00459384(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_3 != 0xff) {
    FUN_0045884c();
    return;
  }
  if (*(char *)(param_1 + 0x100) != '\0') {
    FUN_004598b0(param_1,param_2,param_4,param_5);
    return;
  }
  uVar1 = FUN_007345b8(uRam00974a6c,0);
  FUN_004584ac(param_1,param_2,uVar1,param_4,param_5,*(undefined1 *)(param_1 + 0x13d),
               *(undefined4 *)(param_1 + 0x144),0);
  return;
}
