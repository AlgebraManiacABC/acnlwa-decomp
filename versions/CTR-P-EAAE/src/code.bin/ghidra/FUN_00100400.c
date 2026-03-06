/**
 * FUN_00100400.c
 * Source line: 103566
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00100400(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_18 [12];
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar1 = FUN_002f6e64(auStack_18,"NoDevice");
  uRam00952c38 = FUN_00131e5c(uVar2,uVar3,uVar1,0);
  FUN_002f6e8c(auStack_18);
  FUN_00122620(0xae53b8,uRam00952c38);
  return uRam00952c38;
}
