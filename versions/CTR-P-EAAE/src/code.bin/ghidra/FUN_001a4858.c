/**
 * FUN_001a4858.c
 * Source line: 211663
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001a4858(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  
  if (((undefined4 *)(param_1 + 0x114) != NULL) &&
     (puVar1 = (undefined4 *)FUN_005c2768(), puVar1 != NULL)) {
    *(undefined4 *)(param_1 + 0x114) = *puVar1;
    fVar2 = (float)puVar1[1];
    *(float *)(param_1 + 0x118) = fVar2;
    *(undefined4 *)(param_1 + 0x11c) = puVar1[2];
    *(float *)(param_1 + 0x118) = fVar2 + 32.0;
  }
  return;
}
