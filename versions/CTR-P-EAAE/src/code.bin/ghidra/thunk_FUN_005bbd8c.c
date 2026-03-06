/**
 * thunk_FUN_005bbd8c.c
 * Source line: 407558
 * Body lines: 11
 */
#include "../../../include/types.h"

int thunk_FUN_005bbd8c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_005cdf48(param_1 + 0x46,param_2,0xffffffff,0x7fffffff);
  *(undefined1 *)(param_1 + 0x4e) = 0x21;
  FUN_00303cdc(param_1 + 0x46);
  *(undefined1 *)(param_1 + 0x4f) = 0xff;
  *(undefined1 *)(param_1 + 0x50) = 9;
  iVar1 = Item_Clear((Item_t *)(param_1 + 0x52));
  FUN_0030b250(iVar1 + -0x52);
  *(undefined1 *)(iVar1 + 7) = 0xfe;
  *(undefined1 *)(iVar1 + -3) = 5;
  return iVar1 + -0x52;
}
