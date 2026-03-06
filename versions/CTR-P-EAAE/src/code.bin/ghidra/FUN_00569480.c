/**
 * FUN_00569480.c
 * Source line: 810899
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_00569480(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_009061ec;
  if (param_1[0x40] != 0) {
    FUN_00127698(1,param_1 + 0x40);
  }
  iVar1 = FUN_004ba3e0(param_1 + 4);
  return iVar1 + -0x10;
}
