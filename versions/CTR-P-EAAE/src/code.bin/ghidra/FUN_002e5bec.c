/**
 * FUN_002e5bec.c
 * Source line: 380834
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002e5bec(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(iVar1 + 0xc))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    FUN_0014e910(iVar1 + 300,param_2);
    FUN_0014e910(iVar1 + 0xfc,iVar1 + 300);
    *(undefined4 *)(iVar1 + 0x15c) = uRam00af78e4;
    *(undefined4 *)(iVar1 + 0x160) = uRam00af78e8;
    *(undefined4 *)(iVar1 + 0x164) = uRam00af78ec;
    *(float *)(iVar1 + 0x178) = *(float *)(iVar1 + 0x168) * *(float *)(iVar1 + 0x15c);
    *(float *)(iVar1 + 0x17c) = *(float *)(iVar1 + 0x16c) * *(float *)(iVar1 + 0x160);
  }
  return;
}
