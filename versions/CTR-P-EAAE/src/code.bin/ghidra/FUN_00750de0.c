/**
 * FUN_00750de0.c
 * Source line: 1107278
 * Body lines: 12
 */
#include "../../../include/types.h"

short FUN_00750de0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_004ea048();
  iVar3 = FUN_004e958c(uVar2,(int)*(short *)(param_1 + 0x60c));
  if (iVar3 == 0) {
    sVar1 = *(short *)(param_1 + 0x2e);
  }
  else {
    sVar1 = *(short *)(iVar3 + 0x2e) + *(short *)(param_1 + 0x60e);
  }
  return sVar1;
}
