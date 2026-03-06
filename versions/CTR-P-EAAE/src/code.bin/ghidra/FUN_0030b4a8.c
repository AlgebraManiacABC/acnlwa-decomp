/**
 * FUN_0030b4a8.c
 * Source line: 409431
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0030b4a8(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xbc5) == param_2) {
    iVar1 = param_1 + 0x458;
    FUN_00568630(param_1 + 0x294,iVar1,*(undefined4 *)(param_1 + 0x276c),0);
    if (param_2 == 0) {
      FUN_005697e0(0x3f800000,iVar1);
    }
    else {
      FUN_005697e0(0,iVar1);
    }
    *(bool *)(param_1 + 0xbc5) = param_2 == 0;
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x294);
  }
  return;
}
