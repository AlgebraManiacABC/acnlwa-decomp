/**
 * FUN_0010a400.c
 * Source line: 108776
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0010a400(undefined4 *param_1)

{
  __rt_memclr(param_1,0x20);
  FUN_00305280(param_1,0);
  FUN_0024ddec(param_1);
  *(undefined1 *)((int)param_1 + 2) = 0;
  Item_Copy((Item_t *)(param_1 + 4),(Item_t *)&DAT_0095bfdc);
  Item_Copy((Item_t *)(param_1 + 5),(Item_t *)&DAT_0095bfdc);
  Item_Copy((Item_t *)(param_1 + 6),(Item_t *)&DAT_0095bfdc);
  Item_Copy((Item_t *)(param_1 + 7),(Item_t *)&DAT_0095bfdc);
  return;
}
