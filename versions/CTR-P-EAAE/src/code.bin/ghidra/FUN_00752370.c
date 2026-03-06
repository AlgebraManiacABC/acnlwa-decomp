/**
 * FUN_00752370.c
 * Source line: 1108459
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_00752370(ushort *param_1,uint param_2)

{
  if (param_2 == 0xc) {
    param_2 = (uint)*param_1;
  }
  else if (param_2 == 0xd) {
    param_2 = (uint)param_1[1];
  }
  else if (param_2 == 0xe) {
    param_2 = (uint)param_1[2];
  }
  else if (param_2 == 0xf) {
    param_2 = (uint)param_1[3];
  }
  return param_2;
}
