/**
 * FUN_00423ddc.c
 * Source line: 588656
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00423ddc(int param_1,uint *param_2,undefined1 param_3,uint param_4,undefined2 param_5)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x7330) < 0xc) {
    iVar1 = param_1 + *(uint *)(param_1 + 0x7330) * 0x328;
    __rt_memcpy((uint *)(iVar1 + 0x4d50),param_2,param_4);
    *(uint *)(iVar1 + 0x5070) = param_4;
    *(undefined1 *)(iVar1 + 0x5074) = param_3;
    *(undefined2 *)(iVar1 + 0x5076) = param_5;
    if (*(char *)(param_1 + 0x7334) == '\0') {
      *(undefined1 *)(param_1 + 0x7334) = 1;
    }
    *(int *)(param_1 + 0x7330) = *(int *)(param_1 + 0x7330) + 1;
  }
  return;
}
