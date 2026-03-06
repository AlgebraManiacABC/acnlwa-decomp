/**
 * FUN_003510b8.c
 * Source line: 453027
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_003510b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 * 4 + 0xae8350) == 0) {
      *(undefined4 *)(iVar1 * 4 + 0xae8350) = param_1;
      *(undefined4 *)(iVar1 * 4 + 0xae8370) = param_2;
      *(undefined4 *)(iVar1 * 4 + 0xae8390) = param_3;
      return 1;
    }
    iVar1 += 1;
  } while (iVar1 < 8);
  return 0;
}
