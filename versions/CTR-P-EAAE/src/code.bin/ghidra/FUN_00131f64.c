/**
 * FUN_00131f64.c
 * Source line: 138547
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00131f64(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *local_18;
  char *local_14;
  
  uRam00975348 = 0;
  local_14 = "RootHeap";
  local_18 = &DAT_009047f8;
  puRam0097533c = param_1;
  uVar1 = FUN_00131e5c(*param_1,param_1[1],&local_18,0);
  if (iRam00ae53b8 < iRam00ae53bc) {
    *(undefined4 *)(iRam00ae53c0 + iRam00ae53b8 * 4) = uVar1;
    iRam00ae53b8 += 1;
  }
  DAT_00975338 = 0x975344;
  return;
}
