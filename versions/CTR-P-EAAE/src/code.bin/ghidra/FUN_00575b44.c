/**
 * FUN_00575b44.c
 * Source line: 819760
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_00575b44(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar3 = param_1 + 0xa0;
    for (; param_1 < uVar3; param_1 += 0x20) {
      uVar1 = FUN_006a98b0(param_1,param_2,param_3,param_4);
      uVar2 |= uVar1;
    }
  }
  return uVar2;
}
