/**
 * FUN_00105f10.c
 * Source line: 107457
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00105f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,Item_t param_4,
                 undefined4 param_5)

{
  int iVar1;
  Item_t IStack_18;
  
  IStack_18 = param_4;
  iVar1 = thunk_FUN_00768628();
  if (iVar1 != 0) {
    Item_Set(&IStack_18,0x7ffe);
    iVar1 = FUN_002fd000(param_1);
    if (iVar1 != 0) {
      FUN_002fe3fc(&IStack_18);
    }
    FUN_002fcc14(param_3,&IStack_18,param_4,param_5);
    NOP_002f777c();
  }
  return;
}
