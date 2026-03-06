/**
 * FUN_00450cd8.c
 * Source line: 616811
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00450cd8(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = &UNK_00900d44;
  iVar1 = FUN_00426900(param_1 + 1);
  FUN_00426950(iVar1,param_2 + 4);
  *(undefined1 *)(iVar1 + 0x1c) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(iVar1 + 0x1d) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(iVar1 + 0x1e) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(iVar1 + 0x21) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)(iVar1 + 0x1f) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)(iVar1 + 0x20) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)(iVar1 + 0x22) = *(undefined1 *)(param_2 + 0x26);
  return iVar1 + -4;
}
