/**
 * FUN_002d50b8.c
 * Source line: 373380
 * Body lines: 14
 */
void FUN_002d50b8(int param_1,Item_t *param_2,Item_t *param_3)

{
  int iVar1;
  
  iVar1 = Item_IsNullItem(param_2);
  if ((((iVar1 == 0) && (iVar1 = FUN_002fcb34(param_2), iVar1 != 0x2f)) ||
      ((iVar1 = Item_IsNullItem(param_3), iVar1 == 0 &&
       (iVar1 = FUN_002fcb34(param_3), iVar1 != 0x2f)))) &&
     ((iVar1 = Item_IsNullItem(param_2), iVar1 != 0 &&
      (iVar1 = Item_IsNullItem(param_3), iVar1 == 0)))) {
    Item_Copy((Item_t *)(param_1 + 0x2fa),(Item_t *)&DAT_0095bfdc);
    Item_Copy((Item_t *)(param_1 + 0x2fe),(Item_t *)&DAT_0095bfdc);
    return;
  }
  Item_Copy((Item_t *)(param_1 + 0x2fa),param_2);
  Item_Copy((Item_t *)(param_1 + 0x2fe),param_3);
  return;
}
