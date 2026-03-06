/**
 * FUN_0044badc.c
 * Source line: 612553
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0044badc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (iRam0097d428 - 0x100000U < 0x3ff00000) {
    if ((iRam00974a74 - 0x100000U < 0x3ff00000) &&
       (iVar1 = FUN_004502b4(iRam00974a74 + 0x10,*(undefined4 *)(iRam0097d428 + 0x74),0x210),
       iVar1 - 0x100000U < 0x3ff00000)) {
      *(undefined4 *)(iVar1 + 0x34) = param_2;
    }
    return;
  }
  return;
}
