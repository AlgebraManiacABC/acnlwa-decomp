/**
 * FUN_00717d3c.c
 * Source line: 1071280
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00717d3c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < 8 && (iVar1 = FUN_002fcb34(param_1 + uVar2 * 4 + 0x14), iVar1 != 0x7c))) {
    uVar2 += 1;
    if (7 < (int)uVar2) {
      return 0xffffffff;
    }
  }
  return uVar2;
}
