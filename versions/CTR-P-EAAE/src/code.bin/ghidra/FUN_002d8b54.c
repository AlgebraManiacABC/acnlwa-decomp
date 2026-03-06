/**
 * FUN_002d8b54.c
 * Source line: 375077
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002d8b54(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b4fc0(param_1 + 0x908,"G_inoutR_00",1);
  FUN_00568630(param_1 + 0x908,param_1 + 0xa54,uVar1,0);
  FUN_005697e0(0,param_1 + 0xa54);
  *(byte *)(*(int *)(param_1 + 0xacc) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0xacc) + 0xb7) & 0xfe | 1;
  *(undefined1 *)(param_1 + 0x250d) = 1;
  return;
}
