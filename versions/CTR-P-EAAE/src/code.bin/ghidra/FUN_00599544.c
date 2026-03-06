/**
 * FUN_00599544.c
 * Source line: 845933
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00599544(undefined4 param_1)

{
  int iVar1;
  Fg_t *pFVar2;
  int local_10;
  undefined4 uStack_c;
  
  FUN_003171b4(&local_10,&uStack_c,param_1);
  FUN_0059c934(local_10,uStack_c);
  iVar1 = FUN_006a5e34();
  if (((iVar1 != 0) && (pFVar2 = FUN_002feb00(iVar1,local_10,uStack_c,0), pFVar2 != NULL)) &&
     ((iVar1 = FUN_002fccdc(), iVar1 == 0x13 || (iVar1 = FUN_002fcf7c(), iVar1 != 0)))) {
    FUN_0016fe08(pFVar2,local_10,uStack_c,0);
  }
  return;
}
