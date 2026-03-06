/**
 * FUN_004d43ec.c
 * Source line: 717174
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_004d43ec(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_2 + 3U & 0xfffffffc);
  uVar1 = __aeabi_uidivmod(param_3 - ((int)puVar3 - param_2),0x138);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 += 1;
      *puVar3 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = puVar3;
      puVar3 = puVar3 + 0x4e;
    } while (uVar2 < uVar1);
  }
  return uVar1;
}
