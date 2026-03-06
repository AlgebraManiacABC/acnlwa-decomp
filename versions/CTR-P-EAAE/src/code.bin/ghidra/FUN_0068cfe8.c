/**
 * FUN_0068cfe8.c
 * Source line: 993244
 * Body lines: 14
 */
#include "../../../include/types.h"

Item_t * FUN_0068cfe8(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  Item_t *pIVar2;
  Item_t IStack_18;
  Item_t aIStack_14 [2];
  
  pIVar2 = NULL;
  if (*(char *)(param_2 + 0x15) != '\0') {
    puVar1 = (undefined4 *)Item_Clear(aIStack_14);
    *puVar1 = *(undefined4 *)(param_2 + 0xe);
    puVar1 = (undefined4 *)Item_Clear(&IStack_18);
    *puVar1 = *(undefined4 *)(param_2 + 0xe);
    FUN_0064f018(&IStack_18,param_1);
    pIVar2 = aIStack_14;
  }
  return pIVar2;
}
