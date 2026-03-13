/**
 * FUN_001f32b4.c
 * Source line: 255616
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001f32b4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x400000,uVar1);
  if (iVar2 != 0) {
    FUN_001abbbc(param_1 + 0x14);
    FUN_00205d80(param_1 + 0x1dd4);
  }
  FUN_00605160(param_1);
  return;
}
