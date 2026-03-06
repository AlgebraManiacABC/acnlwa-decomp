/**
 * FUN_005a4bd0.c
 * Source line: 852948
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005a4bd0(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 auStack_18 [6];
  undefined2 local_12;
  
  iVar2 = *param_1;
  uVar1 = *(undefined2 *)(iVar2 + 0x14);
  *(undefined2 *)(iVar2 + 0x14) = 0;
  FUN_005af8c8(auStack_18,*param_1,param_1[1]);
  *(undefined2 *)(iVar2 + 0x14) = uVar1;
  FUN_005af9c4(auStack_18);
  *(undefined2 *)(*param_1 + 0x14) = local_12;
  return;
}
