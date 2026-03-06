/**
 * FUN_001a49cc.c
 * Source line: 211759
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001a49cc(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float fVar3;
  
  uVar1 = FUN_006e225c(0x37);
  FUN_001a1abc(param_1,uVar1,(int)*(char *)(param_1 + 0x136));
  if (((undefined4 *)(param_1 + 0x114) != NULL) &&
     (puVar2 = (undefined4 *)FUN_005c2768(), puVar2 != NULL)) {
    *(undefined4 *)(param_1 + 0x114) = *puVar2;
    fVar3 = (float)puVar2[1];
    *(float *)(param_1 + 0x118) = fVar3;
    *(undefined4 *)(param_1 + 0x11c) = puVar2[2];
    *(float *)(param_1 + 0x118) = fVar3 + 32.0;
  }
  return;
}
