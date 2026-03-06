/**
 * FUN_005d6510.c
 * Source line: 884807
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_005d6510(undefined4 param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(ushort **)(param_3 + 0x10))[1];
  uVar2 = uVar1 + (uint)**(ushort **)(param_3 + 0x10) * 0x10000;
  *(uint *)(*param_2 + 0x18) =
       uVar1 << 0x18 | ((uVar1 << 0x10) >> 0x18) << 0x10 | (uVar2 * 0x100 >> 0x18) << 8 |
       uVar2 >> 0x18;
  FUN_004d60b0();
  param_2[1] = ((*(uint *)(param_3 + 0x14) & 0xfffffffe) - 2) + param_2[1];
  return 0;
}
