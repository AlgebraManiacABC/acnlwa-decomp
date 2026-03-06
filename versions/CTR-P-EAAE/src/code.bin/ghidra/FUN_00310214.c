/**
 * FUN_00310214.c
 * Source line: 414069
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00310214(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x6e4;
  FUN_00568630(param_1 + 0x4d0,iVar1,*(undefined4 *)(param_1 + param_3 * 4 + 0x2770),0);
  iVar2 = param_1 + param_3 * 0xe0;
  if (param_2 == 0) {
    FUN_005697e0(0x3f800000,iVar1);
    *(undefined1 *)(iVar2 + 0xd89) = 1;
  }
  else {
    FUN_005697e0(0,iVar1);
    *(undefined1 *)(iVar2 + 0xd89) = 0;
  }
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x4d0);
}
