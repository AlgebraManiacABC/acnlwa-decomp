/**
 * FUN_00506420.c
 * Source line: 748742
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined1 * FUN_00506420(int param_1)

{
  int iVar1;
  int local_28 [3];
  undefined1 auStack_1c [12];
  
  iVar1 = iRam0095e0fc;
  if (0xc0 < *(int *)(iRam0095e0fc + 8)) {
    FUN_005234d8(iRam0095e0fc,1);
    FUN_0052296c(iVar1,0);
    *(undefined1 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(iVar1 + 0x90) = 0xffffffff;
  }
  FUN_003083bc(auStack_1c,_DAT_0095e0f0,0xc9);
  FUN_00118792(local_28,*(undefined4 *)(param_1 + 0x750));
  (**(code **)(local_28[0] + 0x14))(local_28,auStack_1c);
  return auStack_1c;
}
