/**
 * FUN_006f5090.c
 * Source line: 1051358
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006f5090(int param_1,int param_2)

{
  __rt_memcpy_w(param_1 + 0x1900,param_2,0x31);
  __rt_memcpy_w(param_1 + 0x1934,param_2 + 0x34,0x31);
  __rt_memcpy_w(param_1 + 0x1968,param_2 + 0x68,0x42);
  __rt_memcpy((uint *)(param_1 + 0x19aa),(uint *)(param_2 + 0xaa),0x182);
  __rt_memcpy_w(param_1 + 0x1b2c,param_2 + 0x22c,0x42);
  *(undefined1 *)(param_1 + 0x1b6e) = *(undefined1 *)(param_2 + 0x26e);
  *(undefined1 *)(param_1 + 0x1b6f) = *(undefined1 *)(param_2 + 0x26f);
  *(undefined1 *)(param_1 + 0x1b70) = *(undefined1 *)(param_2 + 0x270);
  *(undefined1 *)(param_1 + 0x1b71) = *(undefined1 *)(param_2 + 0x271);
  *(undefined1 *)(param_1 + 0x1b72) = *(undefined1 *)(param_2 + 0x272);
  Item_Copy((Item_t *)(param_1 + 0x1b74),(Item_t *)(param_2 + 0x274));
  FUN_00311c70(param_1 + 0x1b78,param_2 + 0x278);
  return;
}
