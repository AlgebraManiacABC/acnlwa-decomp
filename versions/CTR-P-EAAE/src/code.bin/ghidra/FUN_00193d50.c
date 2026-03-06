/**
 * FUN_00193d50.c
 * Source line: 205959
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00193d50(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x6b4c);
  iVar1 = *piVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (4 < iVar1) {
    iVar1 = 4;
  }
  *piVar2 = iVar1;
  FUN_00568630(param_1 + 0x2a0,param_1 + 0x848,*(undefined4 *)(param_1 + 0x9b0),0);
  FUN_005697e0((float)(longlong)*piVar2,param_1 + 0x848);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x2a0);
}
