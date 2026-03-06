/**
 * FUN_00207ce4.c
 * Source line: 265896
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 * FUN_00207ce4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = &UNK_008ed7c0;
  do {
    if (param_1[iVar1 + 2] != 0) {
      FUN_002ffb64();
      param_1[iVar1 + 2] = 0;
    }
    iVar1 += 1;
  } while (iVar1 < 2);
  if (param_1[1] != 0) {
    FUN_002ffb64();
    param_1[1] = 0;
  }
  return param_1;
}
