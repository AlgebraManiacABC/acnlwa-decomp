/**
 * FUN_005cc524.c
 * Source line: 879718
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_005cc524(int param_1,int param_2)

{
  __rt_memcpy_w(param_1,param_2,0x31);
  __rt_memcpy_w(param_1 + 0x34,param_2 + 0x34,0x31);
  __rt_memcpy_w(param_1 + 0x68,param_2 + 0x68,0x42);
  __rt_memcpy((uint *)(param_1 + 0xaa),(uint *)(param_2 + 0xaa),0x182);
  __rt_memcpy_w(param_1 + 0x22c,param_2 + 0x22c,0x42);
  *(undefined1 *)(param_1 + 0x26e) = *(undefined1 *)(param_2 + 0x26e);
  *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_2 + 0x26f);
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x270);
  *(undefined1 *)(param_1 + 0x271) = *(undefined1 *)(param_2 + 0x271);
  *(undefined1 *)(param_1 + 0x272) = *(undefined1 *)(param_2 + 0x272);
  Item_Copy((Item_t *)(param_1 + 0x274),(Item_t *)(param_2 + 0x274));
  FUN_00311c70(param_1 + 0x278,param_2 + 0x278);
  return param_1;
}
