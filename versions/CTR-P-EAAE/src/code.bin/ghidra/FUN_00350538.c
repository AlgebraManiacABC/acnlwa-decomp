/**
 * FUN_00350538.c
 * Source line: 452083
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00350538(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_10;
  undefined2 uStack_e;
  
  _local_10 = CONCAT22((short)((uint)param_4 >> 0x10),0x101);
  iVar1 = FUN_00123f94(&local_10,2,0xa0001);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x350564);
  }
  *param_1 = (undefined1)local_10;
  param_1[1] = local_10._1_1_;
  return;
}
