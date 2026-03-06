/**
 * FUN_00716228.c
 * Source line: 1070347
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined2 FUN_00716228(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == (*(byte *)(param_1 + iVar1 * 4 + 0x12) & 0xf)) {
      return *(undefined2 *)(param_1 + iVar1 * 4 + 0x14);
    }
    iVar1 += 1;
  } while (iVar1 < 7);
  return 0;
}
