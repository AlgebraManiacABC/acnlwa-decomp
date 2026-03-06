/**
 * FUN_006343cc.c
 * Source line: 949950
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined2 FUN_006343cc(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 auStack_10 [2];
  byte local_c [4];
  
  FUN_0075a5c8(param_2,local_c,auStack_10,2);
  iVar1 = *(int *)(param_1 + 0xf0);
  iVar3 = 0;
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x9a8) == '\0')) &&
     (uVar2 = FUN_0071b83c(iVar1 + 0x9ac), uVar2 != local_c[0])) {
    iVar3 = 1;
  }
  return auStack_10[iVar3];
}
