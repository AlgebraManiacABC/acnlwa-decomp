/**
 * FUN_004b5488.c
 * Source line: 693929
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004b5488(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_007ace48(*(undefined4 *)(param_1 + 0x15c));
  FUN_007ace08(*(undefined4 *)(param_1 + 0x19c),1,1,param_2);
  uVar1 = *(undefined4 *)(param_1 + 0x160);
  FUN_007ace48(uVar1);
  uVar1 = FUN_007a95c4(uVar1,"uProjection");
  FUN_007ace08(uVar1,1,1,param_2);
  FUN_007ace48(*(undefined4 *)(param_1 + 8));
  FUN_007acdd8(*(undefined4 *)(param_1 + 0x60),4,param_2);
  return;
}
