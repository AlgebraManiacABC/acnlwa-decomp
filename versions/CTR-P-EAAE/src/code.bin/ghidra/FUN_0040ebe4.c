/**
 * FUN_0040ebe4.c
 * Source line: 577251
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_0040ebe4(int *param_1)

{
  int iVar1;
  uint unaff_r5;
  uint extraout_r12;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    param_1[9] = (int)FUN_0040cf7c;
    param_1[10] = 0;
    param_1[0xb] = (int)"NexProcessHostMigrationJob::InetSendRankDecision";
    return unaff_r5 & 0xff00 | 5;
  }
  param_1[9] = (int)&UNK_0044176c;
  param_1[10] = 0;
  param_1[0xb] = (int)"NexProcessHostMigrationJob::HostMigrationFailure";
  return extraout_r12 & 0xff00 | 5;
}
