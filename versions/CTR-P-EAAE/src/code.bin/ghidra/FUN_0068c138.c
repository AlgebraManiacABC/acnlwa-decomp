/**
 * FUN_0068c138.c
 * Source line: 992703
 * Body lines: 11
 */
#include "../../../include/types.h"

Item_t * FUN_0068c138(int param_1)

{
  Item_t *pIVar1;
  Item_t IStack_c;
  
  FUN_0064dc88(0x41000000,param_1);
  pIVar1 = NULL;
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    pIVar1 = Item_CopyAndReturn(&IStack_c,(Item_t *)&DAT_0095bfdc);
    FUN_002faa58(param_1 + 0x68,1,"SYS_Player",10,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0,
                 pIVar1,0,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    pIVar1 = &IStack_c;
  }
  return pIVar1;
}
