/**
 * FUN_005a91f8.c
 * Source line: 856067
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005a91f8(undefined4 *param_1)

{
  *param_1 = &UNK_00907d70;
  if ((param_1[5] != 0) && (param_1[2] == 0)) {
    (**(code **)(**(int **)param_1[1] + 4))();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_002ffb64(param_1);
  return;
}
