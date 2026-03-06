/**
 * FUN_003e3ec8.c
 * Source line: 557670
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_003e3ec8(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xe0e14826;
  if ((param_2 - 0x100000U < 0x3ff00000) && (0xf < param_3)) {
    uVar1 = FUN_00426cd8(param_2);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 6);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 7);
    uVar2 = FUN_00426cf0(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}
