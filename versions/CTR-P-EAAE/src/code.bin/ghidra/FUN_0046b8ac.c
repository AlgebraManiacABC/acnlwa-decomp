/**
 * FUN_0046b8ac.c
 * Source line: 637392
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0046b8ac(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_3 == NULL) {
    return 0xd8e0fbf6;
  }
  uVar1 = FUN_0046eacc(param_3,9);
  if ((uVar1 != 0) && (uVar1 < 9)) {
    __rt_memclr_w(param_1 + 4,0x7d4);
    *(undefined1 *)(param_1 + 4) = 10;
    *(undefined1 *)(param_1 + 8) = 5;
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    __rt_memcpy((uint *)(param_1 + 0x20),param_3,uVar1 << 1);
    return 0;
  }
  return 0xd8e0fbec;
}
