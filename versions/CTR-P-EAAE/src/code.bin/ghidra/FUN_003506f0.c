/**
 * FUN_003506f0.c
 * Source line: 452273
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined8 FUN_003506f0(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0;
  uStack_c = 0;
  iVar1 = FUN_00123f94(&local_10,8,0x90000);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x35071c);
  }
  return CONCAT44(uStack_c,local_10);
}
