/**
 * FUN_00105e14.c
 * Source line: 107420
 * Body lines: 6
 */
void FUN_00105e14(Item_t *param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = Item_IsID(param_1,0x70);
  if ((iVar1 == 0) && (iVar1 = FUN_002ff0b8(param_1), iVar1 != 0)) {
    *param_2 = *param_2 + 1;
  }
  return;
}
