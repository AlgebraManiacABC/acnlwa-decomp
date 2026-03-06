/**
 * FUN_00761be4.c
 * Source line: 1120985
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00761be4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*(int *)(param_1 + 0xf0) == 0) || (_DAT_00aaf14c == 0)) ||
      (iVar1 = *(int *)(*(int *)(param_1 + 0xf0) + 0x1028), iVar1 == 0)) ||
     ((iVar1 = FUN_00309eb8(iVar1,_DAT_00aaf14c + 0x55a6), iVar1 == 0 ||
      ((int)((uint)*(byte *)(iVar1 + 0xbd) * 0x2000000) < 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
