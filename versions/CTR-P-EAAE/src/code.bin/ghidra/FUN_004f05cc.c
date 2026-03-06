/**
 * FUN_004f05cc.c
 * Source line: 738085
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004f05cc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = iRam00952a38;
  *(undefined4 *)(iRam00952a38 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  FUN_00495728(iVar1 + 0x100,param_1);
  return;
}
