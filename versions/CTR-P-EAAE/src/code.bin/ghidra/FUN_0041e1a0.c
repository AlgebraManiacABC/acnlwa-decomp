/**
 * FUN_0041e1a0.c
 * Source line: 586079
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 * FUN_0041e1a0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  *puVar1 = param_2;
  nnnstdMemCpy(puVar1 + 1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  *(char *)((int)puVar1 + 0x103) = (char)*(undefined4 *)(param_1 + 0x28);
  return puVar1;
}
