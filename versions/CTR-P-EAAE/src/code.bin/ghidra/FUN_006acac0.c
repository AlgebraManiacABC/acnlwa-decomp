/**
 * FUN_006acac0.c
 * Source line: 1007815
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006acac0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_002fd6bc(param_1 + 0xe30);
  *(undefined1 *)(param_1 + 0x6359) = uVar1;
  *(byte *)(*(int *)(param_1 + 0x6340) + 0xb7) = *(byte *)(*(int *)(param_1 + 0x6340) + 0xb7) & 0xfe
  ;
  return;
}
