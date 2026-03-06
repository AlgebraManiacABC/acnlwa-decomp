/**
 * FUN_004536e0.c
 * Source line: 618288
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_004536e0(int *param_1)

{
  int iVar1;
  int in_stack_00000004;
  
  param_1[0x12] = in_stack_00000004;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (-1 < iVar1) {
    *(undefined1 *)(param_1[0x15] + 0x52) = 0;
    param_1[9] = 0x453770;
    param_1[10] = 0;
    param_1[0xb] = (int)"ConnectStationJob::SendRelayConnectionRequest";
    iVar1 = 0;
  }
  return iVar1;
}
