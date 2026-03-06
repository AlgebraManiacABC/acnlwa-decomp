/**
 * FUN_006576f8.c
 * Source line: 965894
 * Body lines: 12
 */
void FUN_006576f8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_002fe8a8();
  if (iVar1 != 0) {
    FUN_0071a844(iVar1 + 10);
    iVar2 = FUN_003117bc();
    if (iVar2 == 0x10) {
      Item_Copy((Item_t *)(iVar1 + 0x26),(Item_t *)&DAT_0095bfdc);
      return;
    }
  }
  return;
}
