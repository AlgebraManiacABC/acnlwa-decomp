/**
 * FUN_0074f1c4.c
 * Source line: 1106200
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0074f1c4(undefined4 param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = iRam00975320;
  if (iRam00975320 != 0) {
    FUN_0074efd0(param_1,&local_20,iRam00975320);
    FUN_0074f138(param_1,&uStack_18,iVar1);
    (**(code **)(*piRam00975324 + 0x10))(local_20,uStack_1c,uStack_18,uStack_14);
    (**(code **)(*piRam00975324 + 0x14))(local_20,uStack_1c,uStack_18,uStack_14);
  }
  return;
}
