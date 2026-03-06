/**
 * FUN_002458e4.c
 * Source line: 296729
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002458e4(int param_1)

{
  float fVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  fVar1 = 900.0 / (float)(longlong)(int)*(short *)(&DAT_008391da + *(int *)(param_1 + 0x18) * 2);
  iVar2 = (int)fVar1;
  if (((float)(longlong)iVar2 != fVar1) && (0.0 <= fVar1)) {
    iVar2 += 1;
  }
  *(int *)(param_1 + 0xbc) = iVar2;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}
