/**
 * FUN_004f33dc.c
 * Source line: 740895
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_004f33dc(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00903054;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_0013e7d8(0xad662c,uRam00ad6630,param_1 + 1);
  *param_1 = &UNK_00902bc8;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  __rt_memclr_w(param_1 + 7,0x11);
  return param_1;
}
