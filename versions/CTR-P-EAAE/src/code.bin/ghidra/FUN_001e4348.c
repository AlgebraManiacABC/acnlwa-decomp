/**
 * FUN_001e4348.c
 * Source line: 247810
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001e4348(int param_1,int param_2,int param_3)

{
  param_1 += param_2 * 0x280;
  __rt_memcpy_w(param_1,param_3,0x31);
  __rt_memcpy_w(param_1 + 0x34,param_3 + 0x34,0x31);
  __rt_memcpy_w(param_1 + 0x68,param_3 + 0x68,0x42);
  __rt_memcpy((uint *)(param_1 + 0xaa),(uint *)(param_3 + 0xaa),0x182);
  __rt_memcpy_w(param_1 + 0x22c,param_3 + 0x22c,0x42);
  *(undefined1 *)(param_1 + 0x26e) = *(undefined1 *)(param_3 + 0x26e);
  *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_3 + 0x26f);
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_3 + 0x270);
  *(undefined1 *)(param_1 + 0x271) = *(undefined1 *)(param_3 + 0x271);
  *(undefined1 *)(param_1 + 0x272) = *(undefined1 *)(param_3 + 0x272);
  Item_Copy((Item_t *)(param_1 + 0x274),(Item_t *)(param_3 + 0x274));
  FUN_00311c70(param_1 + 0x278,param_3 + 0x278);
  return;
}
