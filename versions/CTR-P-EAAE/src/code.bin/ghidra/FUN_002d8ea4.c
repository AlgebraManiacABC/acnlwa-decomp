/**
 * FUN_002d8ea4.c
 * Source line: 375189
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002d8ea4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1 + 0x908;
  uVar2 = FUN_004b4fc0(iVar1,"G_inoutR_00",1);
  FUN_00568630(iVar1,param_1 + 0xa7c,uVar2,0);
  FUN_005697e0(0,param_1 + 0xa7c);
  uVar2 = FUN_004b4fc0(iVar1,"G_inoutL_00",1);
  FUN_00568630(iVar1,param_1 + 0xa54,uVar2,0);
  FUN_005697e0(0,param_1 + 0xa54);
  *(byte *)(*(int *)(param_1 + 0xac8) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0xac8) + 0xb7) & 0xfe | 1;
  *(undefined1 *)(param_1 + 0x242d) = 1;
  *(undefined1 *)(param_1 + 0x250d) = 0;
  return;
}
