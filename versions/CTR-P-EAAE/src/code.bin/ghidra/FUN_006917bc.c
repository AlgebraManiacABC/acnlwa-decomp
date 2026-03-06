/**
 * FUN_006917bc.c
 * Source line: 996715
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006917bc(Item_t *param_1)

{
  if ((DAT_0094f310 != 0) && (*(uint *)(DAT_0094f310 + 0x854) < 0x5b)) {
    FUN_006bbd54(param_1,0x2f);
    return;
  }
  Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
  return;
}
