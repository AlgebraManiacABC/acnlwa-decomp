/**
 * FUN_005226bc.c
 * Source line: 765673
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_005226bc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00903708;
  if (param_1[3] != 0) {
    FUN_002f88b8();
    param_1[3] = 0;
  }
  iVar1 = FUN_004d6864(param_1 + 5);
  return iVar1 + -0x14;
}
