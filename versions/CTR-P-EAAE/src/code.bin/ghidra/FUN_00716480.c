/**
 * FUN_00716480.c
 * Source line: 1070403
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_00716480(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == (*(byte *)(param_1 + iVar1 * 4 + 0x12) & 0xf)) {
      return (*(byte *)(param_1 + iVar1 * 4 + 0x12) & 0x40) >> 6;
    }
    iVar1 += 1;
  } while (iVar1 < 7);
  return 0;
}
