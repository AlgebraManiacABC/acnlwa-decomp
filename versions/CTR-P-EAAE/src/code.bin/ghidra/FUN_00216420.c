/**
 * FUN_00216420.c
 * Source line: 273652
 * Body lines: 7
 */
void FUN_00216420(Item_t *param_1)

{
  int iVar1;
  
  if ((cRam0094ed71 == '\0') && (iVar1 = Item_IsNullItem(param_1), iVar1 == 0)) {
    DAT_0094ed70 = 1;
    Item_Copy((Item_t *)&DAT_0094ed78,param_1);
    return;
  }
  return;
}
