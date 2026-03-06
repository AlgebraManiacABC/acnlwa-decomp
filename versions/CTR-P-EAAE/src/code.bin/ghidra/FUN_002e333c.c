/**
 * FUN_002e333c.c
 * Source line: 379222
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002e333c(int *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xfe | param_2;
  *(byte *)((int)param_1 + 0xd9) = param_2;
  return;
}
