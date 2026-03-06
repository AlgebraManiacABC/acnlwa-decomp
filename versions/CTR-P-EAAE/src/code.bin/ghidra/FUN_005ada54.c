/**
 * FUN_005ada54.c
 * Source line: 859410
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_005ada54(short *param_1)

{
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) &&
     ((param_1[3] != 0 && ((ushort)param_1[4] - 0x30 < 10)))) {
    if ((ushort)param_1[5] - 0x30 < 10) {
      if ((ushort)param_1[6] - 0x30 < 10) {
        if ((ushort)param_1[7] - 0x30 < 10) {
          return (uint)(ushort)param_1[7] +
                 ((uint)(ushort)param_1[6] +
                 ((uint)(ushort)param_1[5] + ((ushort)param_1[4] - 0x30) * 10 + -0x30) * 10 + -0x30)
                 * 10 + -0x30;
        }
      }
    }
  }
  return -1;
}
