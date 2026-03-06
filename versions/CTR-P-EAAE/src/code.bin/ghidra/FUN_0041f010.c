/**
 * FUN_0041f010.c
 * Source line: 586557
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_0041f010(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041fbc0(param_1,param_2,2);
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + 0x46) = 0;
    *(undefined **)(param_1 + 0x24) = &UNK_0041ea10;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "UdsBackgroundProcessJob::DisconnectNetwork";
    iVar1 = 0;
  }
  return iVar1;
}
