/**
 * FUN_00328a38.c
 * Source line: 428877
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00328a38(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x264);
  iVar1 = *(int *)(iVar2 + (uint)*param_2 * 4);
  iVar2 = *(int *)(iVar2 + (uint)param_2[1] * 4);
  if (iVar1 != 0 && iVar2 != 0) {
    if (iVar1 == iVar2) {
      FUN_001cd668(iVar1 + 0x5d0,1,iVar2,*(int **)(param_1 + 0x264),param_4);
    }
    else {
      FUN_001cce78(iVar1 + 0x5d0,1,iVar2,0xc,0xc);
    }
  }
  return 1;
}
