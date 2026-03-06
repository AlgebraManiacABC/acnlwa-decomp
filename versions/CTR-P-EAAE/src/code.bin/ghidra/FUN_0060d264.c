/**
 * FUN_0060d264.c
 * Source line: 924259
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0060d264(int param_1,uint param_2,uint param_3,undefined2 *param_4)

{
  int iVar1;
  
  iVar1 = param_1 + (param_3 & 0xf) * 0xa0 + (param_2 & 0xf) * 10;
  *(undefined2 *)(iVar1 + 0x1c) = *param_4;
  *(undefined2 *)(iVar1 + 0x1e) = param_4[1];
  *(undefined2 *)(iVar1 + 0x20) = param_4[2];
  *(undefined2 *)(iVar1 + 0x22) = param_4[3];
  *(undefined1 *)(iVar1 + 0x24) = *(undefined1 *)(param_4 + 4);
  *(undefined1 *)(iVar1 + 0x25) = *(undefined1 *)((int)param_4 + 9);
  return;
}
