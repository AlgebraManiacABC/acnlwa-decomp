/**
 * FUN_00753c94.c
 * Source line: 1109619
 * Body lines: 3
 */
#include "../../../include/types.h"

bool FUN_00753c94(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 + param_3 * 0x70;
  return (*(uint *)(param_1 + ((int)uVar1 >> 5) * 4 + 4) & 1 << (uVar1 & 0x1f)) != 0;
}
