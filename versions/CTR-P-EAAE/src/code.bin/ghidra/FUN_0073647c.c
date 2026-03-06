/**
 * FUN_0073647c.c
 * Source line: 1091590
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined1 FUN_0073647c(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  
  if (param_3 < *(byte *)(param_1 + 0x3f)) {
    uVar1 = 0;
  }
  else {
    nnnstdMemCpy(param_2,param_1 + 0x40,(uint)*(byte *)(param_1 + 0x3f));
    uVar1 = *(undefined1 *)(param_1 + 0x3f);
  }
  return uVar1;
}
