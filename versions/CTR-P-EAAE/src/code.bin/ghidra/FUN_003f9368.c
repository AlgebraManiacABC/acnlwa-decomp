/**
 * FUN_003f9368.c
 * Source line: 565934
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003f9368(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_18 [8];
  
  iVar2 = *(int *)(param_1 + 0x70);
  uVar1 = FUN_003d0cbc(auStack_18,param_2 + 8);
  FUN_003d0e94(iVar2 + 0x30,uVar1);
  FUN_003d0d6c(auStack_18);
  iVar2 = *(int *)(param_1 + 0x70);
  uVar1 = FUN_003d0cbc(auStack_18,param_2 + 0x4a);
  FUN_003d0e94(iVar2 + 0x38,uVar1);
  FUN_003d0d6c(auStack_18);
  return;
}
