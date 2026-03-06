/**
 * FUN_00733680.c
 * Source line: 1089061
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00733680(int param_1)

{
  int iVar1;
  
  if ((iRam00974a74 - 0x100000U < 0x3ff00000) &&
     (iVar1 = FUN_004502b4(iRam00974a74 + 0x10,*(undefined4 *)(param_1 + 0x74),0x210),
     iVar1 - 0x100000U < 0x3ff00000)) {
    FUN_00733e48(iVar1 + 0x18);
    return;
  }
  return;
}
