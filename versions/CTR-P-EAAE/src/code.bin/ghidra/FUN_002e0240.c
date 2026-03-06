/**
 * FUN_002e0240.c
 * Source line: 377648
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002e0240(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  *(int *)(iVar1 + 200) = param_2;
  if (param_2 != 0) {
    *(undefined4 *)(iVar1 + 0xcc) = 0x100038e;
    *(undefined1 *)(iVar1 + 0xda) = 1;
    return;
  }
  *(undefined4 *)(iVar1 + 0xcc) = 0x1000392;
  *(undefined4 *)(iVar1 + 0xc4) = 8;
  *(undefined1 *)(iVar1 + 0xda) = 1;
  return;
}
