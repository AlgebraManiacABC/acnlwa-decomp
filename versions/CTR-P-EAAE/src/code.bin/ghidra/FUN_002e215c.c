/**
 * FUN_002e215c.c
 * Source line: 378781
 * Body lines: 7
 */
void FUN_002e215c(int param_1)

{
  int iVar1;
  
  iVar1 = Item_IsNullItem((Item_t *)(param_1 + 0x794));
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x798) != '\0')) {
    FUN_006d90f4((Item_t *)(param_1 + 0x794));
    return;
  }
  return;
}
