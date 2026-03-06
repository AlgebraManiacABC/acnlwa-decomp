/**
 * FUN_0013f890.c
 * Source line: 152023
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_0013f890(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_001417a0(*(undefined4 *)(param_1 + 0x3c));
  if (puVar1 != NULL) {
    *param_3 = *puVar1;
    uVar2 = FUN_001417dc(puVar1);
    param_3[1] = uVar2;
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar1 + 1);
  }
  return puVar1 != NULL;
}
