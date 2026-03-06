/**
 * FUN_007302fc.c
 * Source line: 1086948
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_007302fc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  do {
    if (((*(short *)(param_1 + uVar2 * 2 + 0x10) != *(short *)(param_1 + 0x42)) &&
        (uVar1 = FUN_0073036c(param_1), uVar1 != 0xff)) &&
       ((param_2 == 0 || (*(byte *)(param_1 + 0xe) != uVar1)))) {
      uVar3 |= 1 << (uVar1 - 1 & 0xff);
    }
    uVar2 += 1;
  } while (uVar2 < 0xc);
  return uVar3;
}
