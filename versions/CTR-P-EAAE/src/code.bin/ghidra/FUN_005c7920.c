/**
 * FUN_005c7920.c
 * Source line: 876455
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005c7920(void)

{
  int iVar1;
  
  if (-1 < (int)((uint)DAT_00aadad4 << 0x1c)) {
    iVar1 = FUN_005c6238(4);
    if (iVar1 == 0) {
      return 0;
    }
    DAT_00aadad4 |= 8;
  }
  return 1;
}
