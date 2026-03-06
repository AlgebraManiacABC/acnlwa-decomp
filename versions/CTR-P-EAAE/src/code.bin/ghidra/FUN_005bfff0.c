/**
 * FUN_005bfff0.c
 * Source line: 869559
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005bfff0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if (((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) &&
     (iVar2 = FUN_006518d8(iVar1,param_1), iVar2 != 0)) {
    FUN_006577f4(iVar1);
    return 1;
  }
  return 0;
}
