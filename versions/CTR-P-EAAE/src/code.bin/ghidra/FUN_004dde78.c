/**
 * FUN_004dde78.c
 * Source line: 723525
 * Body lines: 15
 */
void FUN_004dde78(Item_t *param_1,Item_t *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = Item_GetRawID(param_1);
  iVar3 = Item_GetRawID(param_2);
  iVar2 += iVar3 + -0x4504;
  sVar1 = (short)iVar2;
  if (10 < iVar2) {
    FUN_002fd050(param_2,0x228c);
    FUN_002fd050(param_1,sVar1 + 0x2278);
    return;
  }
  FUN_002fd050(param_2,sVar1 + 0x2282);
  Item_Copy(param_1,(Item_t *)&DAT_0095bfdc);
  return;
}
