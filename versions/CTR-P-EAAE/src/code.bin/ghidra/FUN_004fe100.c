/**
 * FUN_004fe100.c
 * Source line: 745121
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_004fe100(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = &UNK_00902fc8;
  do {
    if ((int *)param_1[iVar1 + 1] != NULL) {
      (**(code **)(*(int *)param_1[iVar1 + 1] + 4))();
      param_1[iVar1 + 1] = 0;
    }
    iVar1 += 1;
  } while (iVar1 < 0x40);
  return param_1;
}
