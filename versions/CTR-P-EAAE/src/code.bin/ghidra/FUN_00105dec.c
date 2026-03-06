/**
 * FUN_00105dec.c
 * Source line: 107405
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_00105dec(Item_t *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = Item_IsID(param_1,0xcd);
  if (iVar1 != 0) {
    FUN_002fcc14(param_3,&DAT_0095bfdc,param_4,param_5);
  }
  return iVar1 != 0;
}
