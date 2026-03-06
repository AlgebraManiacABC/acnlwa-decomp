/**
 * FUN_006039ec.c
 * Source line: 919441
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006039ec(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34c);
  *(undefined1 *)(iVar1 + 4) = 0;
  *(int *)(iVar1 + 8) = param_2;
  if (param_3 < 0 || param_2 < param_3) {
    *(undefined1 *)(iVar1 + 0xc4) = 0;
  }
  else {
    *(int *)(iVar1 + 0xc0) = param_3;
    *(undefined1 *)(iVar1 + 0xc4) = 2;
  }
  return;
}
