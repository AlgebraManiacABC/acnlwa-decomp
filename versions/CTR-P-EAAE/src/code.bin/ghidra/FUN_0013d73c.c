/**
 * FUN_0013d73c.c
 * Source line: 149991
 * Body lines: 12
 */
#include "../../../include/types.h"

cro_container * FUN_0013d73c(cro_container *param_1)

{
  param_1->field0_0x0 = (int)&UNK_008f4a84;
  FUN_00135740(0x982870);
  if ((param_1->field_0xc == '\x01') || (param_1->field_0xc == '\x02')) {
    FUN_00135740(0x982870);
    FUN_0013f000(0x982864,param_1);
    FUN_00137e84(0x982870);
  }
  param_1->field_0xc = 0;
  *(undefined4 *)&param_1->field_0x10 = 0;
  *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
  FUN_00137e84(0x982870);
  return param_1;
}
