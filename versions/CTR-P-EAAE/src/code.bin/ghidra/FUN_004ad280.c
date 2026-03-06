/**
 * FUN_004ad280.c
 * Source line: 687481
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004ad280(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 600) + 0x10))();
  if ((puVar1 != NULL) && ((*puVar1 & 0x40000000) == 0)) {
    puVar1 = NULL;
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  puVar1[5] = *param_2;
  puVar1[6] = uVar2;
  puVar1[7] = uVar3;
  return;
}
