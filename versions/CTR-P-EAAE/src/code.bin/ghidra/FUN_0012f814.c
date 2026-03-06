/**
 * FUN_0012f814.c
 * Source line: 136175
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined2 FUN_0012f814(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0x34) = param_2;
  return uVar1;
}
