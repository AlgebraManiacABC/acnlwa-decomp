/**
 * FUN_004f027c.c
 * Source line: 737943
 * Body lines: 13
 */
#include "../../../include/types.h"

bool FUN_004f027c(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_004ed26c();
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x114) + 0xb8) = 1;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_004ee2b0(param_1,&local_18);
  }
  return iVar1 != 0;
}
