/**
 * FUN_005b4cc0.c
 * Source line: 864969
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005b4cc0(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0xa5) {
    param_1 = (uint)BYTE_00957322;
  }
  uVar1 = DAT_00957344;
  if (param_1 < 0xa5) {
    uVar1 = (&DAT_00957344)[param_1];
  }
  return uVar1;
}
