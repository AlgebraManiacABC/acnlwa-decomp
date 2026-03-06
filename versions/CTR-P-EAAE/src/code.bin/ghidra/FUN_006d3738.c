/**
 * FUN_006d3738.c
 * Source line: 1033102
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_006d3738(undefined4 param_1)

{
  int iVar1;
  
  *(undefined4 *)(DAT_0094fd3c + 0x204) = param_1;
  iVar1 = FUN_006d1ffc(0x47,0);
  if (iVar1 == 0) {
    *(undefined4 *)(DAT_0094fd3c + 0x204) = 0;
  }
  else {
    FUN_0058d3b4(0,0x100045e);
    DAT_0094fd21 = 0;
    DAT_0094fd22 = 0;
  }
  return iVar1;
}
