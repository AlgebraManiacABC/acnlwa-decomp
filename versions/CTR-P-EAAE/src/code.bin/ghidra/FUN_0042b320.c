/**
 * FUN_0042b320.c
 * Source line: 593999
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_0042b320(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint unaff_r5;
  
  if (1 < *(ushort *)(iRam0097d428 + 0x5c)) {
    FUN_00449044(iRam0097d428,param_1 + 0x88);
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitLeaveMesh";
    *(undefined **)(param_1 + 0x24) = &UNK_00429c0c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00 | 5;
  }
  *(char **)(param_1 + 0x2c) = "JoinMeshJob::CompleteCancelWithLeaveMesh";
  *(undefined **)(param_1 + 0x24) = &UNK_0042b3f0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_4 & 0xff00;
}
