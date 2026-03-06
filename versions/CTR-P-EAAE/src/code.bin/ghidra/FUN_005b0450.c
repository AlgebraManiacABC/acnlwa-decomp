/**
 * FUN_005b0450.c
 * Source line: 861650
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005b0450(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x28) & 0xfffffffe;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28) | 1;
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  return;
}
