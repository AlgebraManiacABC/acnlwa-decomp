/**
 * FUN_004e0e90.c
 * Source line: 725472
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_004e0e90(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_009529d4._3_1_ == '\0') {
    uVar1 = GET_BYTE_00957322();
    iVar2 = FUN_002f74e0(0x1000,uVar1);
    if ((iVar2 == 0) && (-1 < (int)((uint)DAT_00aadad4 << 0x1a))) {
      return 1;
    }
  }
  return 0;
}
