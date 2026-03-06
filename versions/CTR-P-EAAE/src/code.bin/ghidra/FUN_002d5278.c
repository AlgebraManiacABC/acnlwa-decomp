/**
 * FUN_002d5278.c
 * Source line: 373444
 * Body lines: 10
 */
int FUN_002d5278(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00301d0c(param_1 + 0x22,&UNK_00582b08,0x20,2);
  FUN_00582aa4();
  iVar1 = FUN_00301d0c(iVar1 + 0x40,Item_Clear,4,100);
  iVar1 = FUN_00301d0c(iVar1 + 400,Item_Clear,4,0x40);
  iVar1 = Item_Clear((Item_t *)(iVar1 + 0x100));
  iVar1 = Item_Clear((Item_t *)(iVar1 + 4));
  iVar1 = Item_Clear((Item_t *)(iVar1 + 4));
  iVar1 = Item_Clear((Item_t *)(iVar1 + 4));
  return iVar1 + -0x2fe;
}
