/**
 * FUN_00465fe0.c
 * Source line: 632289
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00465fe0(uint *param_1)

{
  if ((param_1[0x1b] & 0x8000) != 0) {
    FUN_00464290(0xaea674,*param_1 & 0xff,(int)(short)param_1[1]);
    *(ushort *)(param_1 + 0x1b) = (ushort)param_1[0x1b] & 0x7fff;
  }
  return;
}
