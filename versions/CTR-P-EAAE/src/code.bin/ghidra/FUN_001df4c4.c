/**
 * FUN_001df4c4.c
 * Source line: 245782
 * Body lines: 15
 */
Item_t * FUN_001df4c4(Item_t *param_1)

{
  int iVar1;
  Item_t *dst;
  
  iVar1 = Item_Clear(param_1);
  iVar1 = Item_Clear((Item_t *)(iVar1 + 4));
  iVar1 = Item_Clear((Item_t *)(iVar1 + 4));
  iVar1 = Item_Clear((Item_t *)(iVar1 + 4));
  iVar1 = Item_Clear((Item_t *)(iVar1 + 4));
  dst = (Item_t *)Item_Clear((Item_t *)(iVar1 + 4));
  Item_Copy(dst + -5,(Item_t *)&DAT_0095bfdc);
  Item_Copy(dst + -4,(Item_t *)&DAT_0095bfdc);
  Item_Copy(dst + -3,(Item_t *)&DAT_0095bfdc);
  Item_Copy(dst + -2,(Item_t *)&DAT_0095bfdc);
  Item_Copy(dst + -1,(Item_t *)&DAT_0095bfdc);
  Item_Copy(dst,(Item_t *)&DAT_0095bfdc);
  return dst + -5;
}
