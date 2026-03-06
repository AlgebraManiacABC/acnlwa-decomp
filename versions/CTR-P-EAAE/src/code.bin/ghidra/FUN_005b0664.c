/**
 * FUN_005b0664.c
 * Source line: 861986
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005b0664(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 + 1;
  if (99 < (ushort)(uVar1 + 1)) {
    uVar1 = *param_1;
    param_1[1] = 0;
    *param_1 = uVar1 + 1;
    if (899 < (ushort)(uVar1 + 1)) {
      *param_1 = 0;
    }
  }
  return;
}
