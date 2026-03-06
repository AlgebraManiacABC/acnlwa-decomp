/**
 * FUN_0049bd70.c
 * Source line: 673947
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_0049bd70(int param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    if ((uint)(*(int *)(param_1 + 4) + param_3) <= *(uint *)(param_1 + 8)) {
      nnnstdMemCpy(*(int *)(param_1 + 4),param_2,param_3);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3;
      return param_3;
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return -1;
}
