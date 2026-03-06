/**
 * FUN_005be19c.c
 * Source line: 868721
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_005be19c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_005cdf48(param_1,param_2,0xffffffff,0x7fffffff);
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_00303cdc(param_1);
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 9;
  iVar1 = Item_Clear((Item_t *)(param_1 + 0x6c));
  iVar1 = Item_Clear((Item_t *)(iVar1 + 4));
  FUN_005be0fc(iVar1 + -0x70);
  return iVar1 + -0x70;
}
