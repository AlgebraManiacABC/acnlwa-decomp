/**
 * FUN_005c4da4.c
 * Source line: 874294
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_005c4da4(undefined4 param_1,undefined4 param_2)

{
  uint *_src;
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  do {
    _src = (uint *)FUN_005c330c(uVar1 & 0xff,param_2);
    uVar2 = __rt_memcpy((uint *)(uVar1 * 0x26 + 0xaada3c),_src,0x26);
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar1 += 1;
  } while (uVar1 < 4);
  return (int)uVar2;
}
