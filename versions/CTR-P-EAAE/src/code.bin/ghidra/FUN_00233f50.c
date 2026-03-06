/**
 * FUN_00233f50.c
 * Source line: 287526
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00233f50(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_005c7354(*(char *)(param_1 + 0x32) != '\0',1);
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0xf0);
  uVar1 = FUN_00305f44();
  FUN_0018f6a0(_DAT_0094f3bc,uVar1,uVar2,3);
  return 1;
}
