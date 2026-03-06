/**
 * FUN_00351068.c
 * Source line: 453007
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00351068(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 * 4 + 0xae8350) == param_1) {
      *(undefined4 *)(iVar1 * 4 + 0xae8350) = 0;
      *(undefined4 *)(iVar1 * 4 + 0xae8370) = 0;
      *(undefined4 *)(iVar1 * 4 + 0xae8390) = 0;
      return 1;
    }
    iVar1 += 1;
  } while (iVar1 < 8);
  return 0;
}
