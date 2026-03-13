/**
 * FUN_007288dc.c
 * Source line: 1081774
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 FUN_007288dc(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_1 + 0x134);
  if (param_2 != NULL) {
    *param_2 = *(undefined4 *)(param_1 + 0x138);
  }
  return *(undefined4 *)(param_1 + 0x138);
}
