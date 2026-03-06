/**
 * FUN_00185ab4.c
 * Source line: 200238
 * Body lines: 11
 */
#include "../../../include/types.h"

FUN_00185ab4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  Item_t IStack_18;
  undefined1 local_14;
  
  Item_Clear(&IStack_18);
  FUN_007795ec(&IStack_18,param_2);
  iVar1 = FUN_006f9c08(param_5);
  if (iVar1 != 0) {
    FUN_002d5184(iVar1,&IStack_18);
    *(undefined1 *)(iVar1 + 0x21) = local_14;
  }
  return (undefined1 *)&IStack_18;
}
