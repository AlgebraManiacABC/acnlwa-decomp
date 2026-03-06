/**
 * FUN_005c4840.c
 * Source line: 873985
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005c4840(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_1b;
  undefined1 local_17;
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    local_20 = *param_1;
    local_1c = 0;
    local_1b = *param_2;
    local_17 = 1;
    FUN_0066ac8c(iVar1,&local_20,2,0,1,0);
  }
  return;
}
