/**
 * FUN_00301400.c
 * Source line: 398870
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00301400(ushort *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  if (*param_1 <= param_2) {
    if (*param_1 != param_2) {
      return 0xffffffff;
    }
    param_4 |= param_3 << 8;
    uVar1 = (param_1[1] & 0xff) << 8 | (uint)(param_1[1] >> 8);
    if (uVar1 == param_4) {
      return 0;
    }
    if (uVar1 <= param_4) {
      return 0xffffffff;
    }
  }
  return 1;
}
