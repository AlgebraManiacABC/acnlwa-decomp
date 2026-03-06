/**
 * FUN_00648b1c.c
 * Source line: 958507
 * Body lines: 14
 */
#include "../../../include/types.h"

Item_t * FUN_00648b1c(int param_1,byte *param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  Item_t *pIVar2;
  Item_t IStack_10;
  
  pIVar2 = (Item_t *)(uint)*param_2;
  if ((Item_t *)(uint)*param_2 == (Item_t *)0x17) {
    IStack_10 = param_4;
    iVar1 = FUN_0051ca3c();
    Item_CopyAndReturn(&IStack_10,(Item_t *)(iVar1 + 0x70));
    Item_Copy((Item_t *)(param_1 + 0x130),&IStack_10);
    *(undefined1 *)(param_1 + 0x138) = 0;
    FUN_0064bed4(param_1,&IStack_10,0,*(char *)(param_1 + 0x281) != '\0');
    pIVar2 = &IStack_10;
  }
  return pIVar2;
}
