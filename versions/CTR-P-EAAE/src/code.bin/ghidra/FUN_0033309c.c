/**
 * FUN_0033309c.c
 * Source line: 435088
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0033309c(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0030ba54();
  if (uVar1 == 0xf) {
    uVar1 = FUN_002fae84();
    return uVar1;
  }
  uVar2 = 0;
  do {
    if ((byte)(&UNK_00842752)[uVar2 * 4] == uVar1) {
      return (uint)*(ushort *)(&UNK_00842750 + uVar2 * 4);
    }
    uVar2 += 1;
  } while (uVar2 < 0x14);
  return 0x7ffe;
}
