/**
 * FUN_005bf44c.c
 * Source line: 869068
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_005bf44c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uRam009503ac = param_1;
  if (((uRam009503b0 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x9503b0), iVar1 != 0)) {
    uRam009503b4 = 0x273;
    uRam009503b6 = 0x215;
  }
  uVar2 = 0;
  do {
    FUN_00529c80(*(undefined2 *)(uVar2 * 2 + 0x9503b4),uRam009503ac,0);
    uVar2 += 1;
  } while (uVar2 < 2);
  return 2;
}
