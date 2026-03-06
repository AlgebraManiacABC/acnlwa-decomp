/**
 * FUN_00218324.c
 * Source line: 274118
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00218324(int param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  __rt_memclr((undefined4 *)(param_1 + 0x13),600);
  __rt_memclr((undefined4 *)(param_1 + 0x26b),600);
  puVar1 = (undefined4 *)FUN_002fb378();
  uStack_5c = *puVar1;
  uStack_58 = puVar1[1];
  uStack_54 = puVar1[2];
  FUN_00312ab8(&uStack_5c,0,0xfffffffa,0,0);
  GET_DAT_0095bf74();
  return;
}
