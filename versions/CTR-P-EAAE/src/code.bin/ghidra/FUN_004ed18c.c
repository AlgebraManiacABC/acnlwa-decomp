/**
 * FUN_004ed18c.c
 * Source line: 734524
 * Body lines: 3
 */
#include "../../../include/types.h"

undefined4 FUN_004ed18c(undefined4 param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_2 + 0x114) + 0x120) = param_1;
  FUN_004a7064(param_1,*(undefined4 *)(*(int *)(param_2 + 0x114) + 0x124));
  return 1;
}
