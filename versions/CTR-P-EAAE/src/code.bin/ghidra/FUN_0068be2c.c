/**
 * FUN_0068be2c.c
 * Source line: 992641
 * Body lines: 13
 */
#include "../../../include/types.h"

Item_t * FUN_0068be2c(int param_1)

{
  undefined1 uVar1;
  Item_t *pIVar2;
  Item_t aIStack_14 [2];
  
  FUN_0064dc88(0x40800000);
  pIVar2 = NULL;
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x8ca);
    pIVar2 = Item_CopyAndReturn(aIStack_14,(Item_t *)&DAT_0095bfdc);
    FUN_002faa58(param_1 + 0x68,1,"SYS_Player",uVar1,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0,
                 pIVar2,0,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    pIVar2 = aIStack_14;
  }
  return pIVar2;
}
