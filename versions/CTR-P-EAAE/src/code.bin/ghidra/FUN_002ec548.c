/**
 * FUN_002ec548.c
 * Source line: 384888
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002ec548(int param_1)

{
  int iVar1;
  undefined *local_10;
  char *local_c;
  
  local_c = "Other/tkk_live_cam.bin";
  local_10 = &DAT_009047f8;
  iVar1 = FUN_0056a974(param_1 + 0x38,&local_10,DAT_00952c3c,4);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x2c) == 0)) && (*(int *)(param_1 + 0x10c) == 0x270)) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x34) = 0xc;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x108) + 0x270;
    iRam0095c698 = param_1 + 0x2c;
  }
  return;
}
