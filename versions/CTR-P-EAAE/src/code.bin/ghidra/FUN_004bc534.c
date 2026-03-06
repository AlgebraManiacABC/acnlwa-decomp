/**
 * FUN_004bc534.c
 * Source line: 699068
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004bc534(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x34);
    for (uVar1 = *(uint *)(param_1 + 0x30) & 3; uVar1 < param_2; uVar1 += 1) {
      if (iVar2 + uVar1 * 0x20 != 0) {
        FUN_004ba6c8();
      }
    }
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffffc | param_2 & 3;
  *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) & 0xfb;
  return;
}
