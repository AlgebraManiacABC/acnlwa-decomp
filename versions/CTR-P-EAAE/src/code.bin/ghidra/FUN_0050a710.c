/**
 * FUN_0050a710.c
 * Source line: 749819
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0050a710(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (iRam0095e0fc != 0) {
    uVar1 = *(undefined4 *)(iRam0095e0fc + 4);
  }
  iVar2 = FUN_00522074(uVar1,*(undefined4 *)(iRam0095e0fc + 0x14),0);
  iVar3 = FUN_0050a5ac(param_1);
  if (iVar3 != 0) {
    iVar2 += -1;
  }
  return iVar2;
}
