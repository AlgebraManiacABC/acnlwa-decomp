/**
 * FUN_00439ffc.c
 * Source line: 603039
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00439ffc(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0073264c();
  if ((((iVar1 == 0) && (param_2 < (uint)param_1[0x10])) && (param_3 != 0)) &&
     (((uint)param_1[0x11] <= param_3 &&
      ((param_1[0x11] != param_3 || (*(uint *)(param_1[0x15] + param_2 * 4) < param_4)))))) {
    iVar1 = *(int *)(iRam00974a18 + 0x34);
    param_1[0x1a] = *(int *)(iRam00974a18 + 0x30);
    param_1[0x1b] = iVar1;
    (**(code **)(*param_1 + 8))(param_1,1);
    param_1[9] = (int)FUN_00439d20;
    param_1[10] = 0;
    param_1[0xb] = (int)"RelayRouteManageJob::WaitAllDirectConnectionReport";
    return 1;
  }
  return 0;
}
