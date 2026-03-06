/**
 * FUN_006f0900.c
 * Source line: 1049216
 * Body lines: 9
 */
void FUN_006f0900(void)

{
  ItemID *pIVar1;
  Item_t in_r3;
  Item_t IStack_28;
  
  IStack_28 = in_r3;
  pIVar1 = FUN_005359fc(5);
  Item_Set(&IStack_28,*pIVar1 & 0xffff);
  Item_GetParam(&IStack_28);
  FUN_002fae84();
  return;
}
