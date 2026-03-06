/**
 * FUN_0056d7c0.c
 * Source line: 814491
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0056d7c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  if (param_2 == 0) {
          // WARNING: Could not recover jumptable at 0x0056d820. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x1c))(param_1);
    return;
  }
  iVar1 = FUN_00723fac(&Npc_Normal_ConstPack_bin_fileinfo_info);
  local_10 = CONCAT22(local_10._2_2_,(short)iVar1);
  if (iVar1 != 0xffff) {
    FUN_0056d874(param_1,&local_10);
    return;
  }
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}
