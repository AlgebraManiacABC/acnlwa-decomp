/**
 * FUN_005c5b3c.c
 * Source line: 874887
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined8 FUN_005c5b3c(uint param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = __rt_memcpy((uint *)((param_2 & 3) * 0x26 + 0xaada3c),
                      (uint *)((param_1 & 3) * 0x26 + 0xaada3c),0x26);
  return uVar1;
}
