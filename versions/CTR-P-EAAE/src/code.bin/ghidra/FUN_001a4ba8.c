/**
 * FUN_001a4ba8.c
 * Source line: 211828
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001a4ba8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x1bc) = 1;
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x10000000,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_006e225c(0x61);
    FUN_001a1abc(param_1,uVar1,(int)*(char *)(param_1 + 0x136));
    return;
  }
  uVar1 = FUN_006e225c(0x12);
  FUN_001a1abc(param_1,uVar1,(int)*(char *)(param_1 + 0x136));
  return;
}
