/**
 * FUN_00458cdc.c
 * Source line: 622524
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00458cdc(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  if (0xb < *(byte *)(param_1 + 0x13d)) {
    if (*(int *)(iRam00974a6c + 0xa4) - 0x100000U < 0x3ff00000) {
      bVar1 = *(byte *)(*(int *)(iRam00974a6c + 0xa4) + 0x14);
      uVar2 = (uint)bVar1;
      *(byte *)(param_1 + 0x13d) = bVar1;
      if (uVar2 < 0xc) {
        *(int *)(param_1 + 0x140) = 1 << uVar2;
        FUN_00459f20(param_1 + 0xc,uVar2,*(undefined4 *)(param_1 + 0x144));
        return;
      }
    }
  }
  return;
}
