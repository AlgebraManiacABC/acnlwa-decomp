/**
 * FUN_002e5f14.c
 * Source line: 380975
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002e5f14(cro_container *param_1)

{
  if ((param_1->field_0x14 & 1) != 0) {
    FUN_0013f000(0xabe0ac,param_1);
    param_1->field_0x14 = param_1->field_0x14 & 0xfe;
  }
  *(undefined4 *)&param_1->field_0xc = 0;
  return;
}
