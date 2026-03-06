/**
 * FUN_0024f400.c
 * Source line: 301266
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0024f400(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_001f4fec(param_1,param_2 + 1);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0xc)) = param_2[3];
  *(undefined1 *)((int)piVar1 + 0xc9) = 0;
  iVar2 = FUN_006b1468(piVar1 + 0x33);
  *(undefined1 *)(iVar2 + 0x44) = 1;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined1 *)(iVar2 + 0x50) = 0;
  iVar2 = FUN_002d59d4(iVar2 + 0x54);
  return iVar2 + -0x120;
}
