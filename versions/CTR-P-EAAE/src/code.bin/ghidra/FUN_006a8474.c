/**
 * FUN_006a8474.c
 * Source line: 1004801
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006a8474(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [48];
  
  iVar1 = param_1 + *(int *)(param_1 + 0x184) * 0x18;
  iVar2 = *(int *)(iVar1 + 0x10);
  if ((iVar2 != 0) && (*(int *)(iVar1 + 0x14) == *(int *)(iVar2 + 0xc))) {
    FUN_00207190(auStack_38,param_2,param_3,1);
    FUN_002e5bec(param_1 + *(int *)(param_1 + 0x184) * 0x18 + 4,auStack_38);
    return 1;
  }
  return 0;
}
