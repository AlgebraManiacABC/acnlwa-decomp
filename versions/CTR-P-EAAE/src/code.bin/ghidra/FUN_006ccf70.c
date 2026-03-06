/**
 * FUN_006ccf70.c
 * Source line: 1029278
 * Body lines: 5
 */
void FUN_006ccf70(Item_t *param_1,int param_2,int param_3,int param_4,int param_5,Item_t *param_6)

{
  Item_t *src;
  
  src = (Item_t *)(param_2 + (param_5 + (param_3 * 9 + param_4) * 10) * 4);
  Item_CopyAndReturn(param_1,src);
  Item_Copy(src,param_6);
  return;
}
