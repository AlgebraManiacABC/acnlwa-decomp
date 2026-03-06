/**
 * FUN_001aff90.c
 * Source line: 218070
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001aff90(void)

{
  int iVar1;
  undefined *local_10;
  undefined4 local_c;
  
  if (((uRam00953394 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x953394), iVar1 != 0)) {
    iVar1 = FUN_005d46dc();
    uRam00953398 = *(undefined4 *)(iVar1 * 4 + 0x95339c);
  }
  local_c = uRam00953398;
  local_10 = &DAT_009047f8;
  FUN_0056a974(&DAT_00a18690,&local_10,DAT_00952c3c,0x80);
  return;
}
