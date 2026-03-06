/**
 * FUN_00827280.c
 * Source line: 1236347
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_00827280(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 8))(param_1);
  iVar1 = 0;
  do {
    if (*(char *)(param_1[1] + iVar1) == '\0') {
      if (0x80000 < iVar1) {
        return 0;
      }
      return iVar1;
    }
    iVar1 += 1;
  } while (iVar1 < 0x80001);
  return 0;
}
