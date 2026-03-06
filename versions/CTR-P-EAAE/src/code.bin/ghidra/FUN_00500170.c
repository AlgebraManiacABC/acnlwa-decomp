/**
 * FUN_00500170.c
 * Source line: 746124
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 * FUN_00500170(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = &UNK_009030fc;
  do {
    if ((int *)param_1[iVar1 + 3] != NULL) {
      (**(code **)(*(int *)param_1[iVar1 + 3] + 4))();
      param_1[iVar1 + 3] = 0;
    }
    iVar1 += 1;
  } while (iVar1 < 2);
  if ((int *)param_1[2] != NULL) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  return param_1;
}
