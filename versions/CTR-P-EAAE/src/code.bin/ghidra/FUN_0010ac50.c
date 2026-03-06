/**
 * FUN_0010ac50.c
 * Source line: 109208
 * Body lines: 10
 */
Item_t * FUN_0010ac50(Item_t *param_1,Item_t *param_2)

{
  Item_Copy(param_1,param_2);
  Item_Copy(param_1 + 1,param_2 + 1);
  Item_Copy(param_1 + 2,param_2 + 2);
  Item_Copy(param_1 + 3,param_2 + 3);
  Item_Copy(param_1 + 4,param_2 + 4);
  Item_Copy(param_1 + 5,param_2 + 5);
  Item_Copy(param_1 + 6,param_2 + 6);
  Item_Copy(param_1 + 7,param_2 + 7);
  *(char *)&param_1[8].raw_item_id = (char)param_2[8].raw_item_id;
  return param_1;
}
