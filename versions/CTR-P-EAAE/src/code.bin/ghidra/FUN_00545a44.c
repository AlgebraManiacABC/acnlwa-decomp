/**
 * FUN_00545a44.c
 * Source line: 788312
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00545a44(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00904a10;
  iVar1 = iRam009753c8;
  if ((iRam009753c8 != 0) &&
     (FUN_005403c8(iRam009753c8,param_1), *(undefined4 **)(iVar1 + 0x2c) == param_1)) {
    FUN_00540380(iVar1,0);
  }
  FUN_0013efb4(param_1);
  FUN_002ffb64();
  return;
}
