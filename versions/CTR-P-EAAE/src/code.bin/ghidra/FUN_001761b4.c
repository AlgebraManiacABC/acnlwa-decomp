/**
 * FUN_001761b4.c
 * Source line: 190878
 * Body lines: 13
 */
#include "../../../include/types.h"

ItemBitfield_t * FUN_001761b4(undefined4 param_1,int param_2)

{
  ItemBitfield_t *pIVar1;
  ItemBitfield_t IStack_308;
  
  ItemBitfield_ClearAndReturn(&IStack_308);
  FUN_006f1f14(&IStack_308,8,0,1,1,1);
  FUN_002fc29c(&IStack_308);
  FUN_002fc2a4(&IStack_308,9);
  FUN_002fc2a4(&IStack_308,0x1c);
  if (param_2 != 0) {
    pIVar1 = GET_DAT_0095bf74();
    return pIVar1;
  }
  FUN_002fea2c(param_1,&IStack_308);
  return &IStack_308;
}
