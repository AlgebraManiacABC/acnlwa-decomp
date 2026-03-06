/**
 * FUN_0053cfe8.c
 * Source line: 782253
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0053cfe8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *local_18;
  char *local_14;
  
  uRam0097d418 = 0;
  local_14 = "RootHeap";
  local_18 = &UNK_009039e0;
  puRam0097d410 = param_1;
  uVar1 = FUN_0053cd54(*param_1,param_1[1],&local_18,0);
  if (iRam00ae70a4 < iRam00ae70a8) {
    *(undefined4 *)(iRam00ae70ac + iRam00ae70a4 * 4) = uVar1;
    iRam00ae70a4 += 1;
  }
  uRam0097d40c = 0x97d414;
  return;
}
