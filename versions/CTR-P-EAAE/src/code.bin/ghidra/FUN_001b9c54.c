/**
 * FUN_001b9c54.c
 * Source line: 223946
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_001b9c54(int param_1)

{
  undefined2 uVar1;
  
  if (param_1 - 0xb2U < 8) {
    uVar1 = *(undefined2 *)(&UNK_00865350 + (param_1 - 0xb2U) * 2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
