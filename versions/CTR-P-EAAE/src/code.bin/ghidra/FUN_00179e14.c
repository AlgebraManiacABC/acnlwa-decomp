/**
 * FUN_00179e14.c
 * Source line: 193775
 * Body lines: 7
 */
#include "../../../include/types.h"

Item_t * FUN_00179e14(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_68 [92];
  Item_t IStack_c;
  
  uVar1 = Item_Set(&IStack_c,0x29e4);
  uVar1 = FUN_002fe7f4(local_68,uVar1,0);
  FUN_002fe874(param_1,uVar1,0);
  return &IStack_c;
}
