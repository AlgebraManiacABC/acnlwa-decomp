/**
 * FUN_0036a89c.c
 * Source line: 472688
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0036a89c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008fb858;
  if ((int *)param_1[0x8b] != NULL) {
    (**(code **)(*(int *)param_1[0x8b] + 4))();
  }
  *param_1 = &UNK_008fc5f8;
  iVar1 = FUN_003cc49c(param_1 + 2);
  return iVar1 + -8;
}
