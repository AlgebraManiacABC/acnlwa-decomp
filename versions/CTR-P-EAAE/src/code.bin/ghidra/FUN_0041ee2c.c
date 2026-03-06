/**
 * FUN_0041ee2c.c
 * Source line: 586483
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_0041ee2c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041fbc0(param_1,param_2,1);
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + 0x45) = 0;
    *(undefined **)(param_1 + 0x24) = &UNK_0041e968;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "UdsBackgroundProcessJob::DestroyNetwork";
    iVar1 = 0;
  }
  return iVar1;
}
