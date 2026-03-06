/**
 * FUN_007509b8.c
 * Source line: 1107099
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_007509b8(int param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x764) & 1) == 0) {
    if (((uRam0094d6a4 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x94d6a4), iVar1 != 0)) {
      uRam0098425c = 0;
      uRam00984260 = 0;
      uRam00984264 = 0;
    }
    return 0x98425c;
  }
  return param_1 + 0x2e0;
}
