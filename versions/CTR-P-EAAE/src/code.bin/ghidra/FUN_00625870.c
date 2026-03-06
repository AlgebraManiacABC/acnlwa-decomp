/**
 * FUN_00625870.c
 * Source line: 939289
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00625870(ushort *param_1,ushort param_2,ushort param_3,short param_4,short param_5,
                 short param_6,short param_7)

{
  if (param_1 == NULL) {
    return;
  }
  *param_1 = (((param_2 & 3 | (param_3 & 0x3e01) << 2 | param_4 << 3) & 0xf7ff | param_5 << 0xb) &
              0xefff | param_6 << 0xc) & 0x1fff | param_7 << 0xd;
  return;
}
