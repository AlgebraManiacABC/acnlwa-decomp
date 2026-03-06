/**
 * FUN_005b42fc.c
 * Source line: 864492
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined8 FUN_005b42fc(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 < 0xa5) {
    uVar1 = (&DAT_00889308)[param_1];
    param_2 = -(uint)(0x30 < uVar1);
    if (0x30 < uVar1) {
      uVar1 = 0x30;
    }
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(param_2,uVar1);
}
