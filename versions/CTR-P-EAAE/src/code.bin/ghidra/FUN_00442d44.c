/**
 * FUN_00442d44.c
 * Source line: 607477
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_00442d44(int param_1)

{
  int iVar1;
  uint unaff_r5;
  uint extraout_r12;
  
  iVar1 = FUN_0042ed94(*(undefined4 *)(iRam0097d428 + 0x4c),param_1 + 0x56);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x62) = 1;
    *(undefined **)(param_1 + 0x24) = &UNK_00442830;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LeaveWithHostMigrationJob::WaitMigrationResponse";
    return unaff_r5 & 0xff00 | 5;
  }
  *(undefined **)(param_1 + 0x24) = &UNK_00442750;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LeaveWithHostMigrationJob::CleanupMesh";
  return extraout_r12 & 0xff00;
}
