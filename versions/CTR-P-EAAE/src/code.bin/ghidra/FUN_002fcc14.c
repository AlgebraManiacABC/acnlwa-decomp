/**
 * FUN_002fcc14.c
 * Source line: 395205
 * Body lines: 7
 */
void FUN_002fcc14(int param_1,Item_t *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0057bc2c(param_3,param_4);
  if (iVar1 != 0) {
    Item_Copy((Item_t *)(param_1 + param_4 * 0x40 + param_3 * 4),param_2);
    return;
  }
  return;
}
