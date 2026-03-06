/**
 * FUN_001d32c8.c
 * Source line: 237556
 * Body lines: 10
 */
void FUN_001d32c8(int param_1,Item_t *param_2)

{
  Item_Copy((Item_t *)(param_1 + 0x200),param_2);
  Item_Copy((Item_t *)(param_1 + 0x204),param_2 + 1);
  Item_Copy((Item_t *)(param_1 + 0x208),param_2 + 2);
  Item_Copy((Item_t *)(param_1 + 0x20c),param_2 + 3);
  Item_Copy((Item_t *)(param_1 + 0x210),param_2 + 4);
  Item_Copy((Item_t *)(param_1 + 0x214),param_2 + 5);
  Item_Copy((Item_t *)(param_1 + 0x218),param_2 + 6);
  Item_Copy((Item_t *)(param_1 + 0x21c),param_2 + 7);
  *(char *)(param_1 + 0x220) = (char)param_2[8].raw_item_id;
  return;
}
