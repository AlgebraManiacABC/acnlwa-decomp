/**
 * FUN_007551f4.c
 * Source line: 1110798
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_007551f4(ushort *param_1)

{
  if (((*param_1 & 0x3ff) != 0) &&
     (((999 < (*param_1 & 0xffff03ff) - 1 || (param_1[3] < param_1[1])) || (param_1[4] < param_1[2])
      ))) {
    return 0;
  }
  return 1;
}
