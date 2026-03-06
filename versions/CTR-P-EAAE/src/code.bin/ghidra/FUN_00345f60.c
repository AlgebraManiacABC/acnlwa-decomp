/**
 * FUN_00345f60.c
 * Source line: 442954
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_00345f60(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_20 [12];
  int *local_14 [2];
  
  FUN_001289ac(auStack_20,1);
  uVar1 = FUN_003478a8(local_14,auStack_20,0);
  if ((((uVar1 & 0x3fc00) == 0x4400) && (0xdb < (uVar1 & 0x3ff))) && ((uVar1 & 0x3ff) < 0xe6)) {
    uVar1 = 0xc8804482;
  }
  if ((-1 < (int)uVar1) && (uVar1 = FUN_00135384(param_1,local_14[0],0), (int)uVar1 < 0)) {
    (**(code **)(*local_14[0] + 0x30))();
  }
  return uVar1;
}
