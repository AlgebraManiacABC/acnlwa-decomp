/**
 * FUN_004282c8.c
 * Source line: 591940
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004282c8(int param_1)

{
  int iVar1;
  
  iVar1 = iRam00974a18 + 0x3c;
  thunk_FUN_00135748(iVar1);
  if (*(char *)(param_1 + 0x344) == '\0') {
    *(undefined1 *)(param_1 + 0x344) = 5;
    FUN_004287d4(param_1 + 0x350);
    FUN_00429914(iRam00974a18,param_1 + 0x340,1);
    thunk_FUN_001357ec(iVar1);
    return;
  }
  thunk_FUN_001357ec(iVar1);
  return;
}
