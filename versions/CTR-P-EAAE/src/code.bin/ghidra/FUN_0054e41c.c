/**
 * FUN_0054e41c.c
 * Source line: 793183
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 * FUN_0054e41c(undefined4 *param_1)

{
  *param_1 = &UNK_00905970;
  if ((int *)param_1[2] != NULL) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  FUN_002ffb64(param_1[6]);
  FUN_002f76ac(param_1 + 0x399,&UNK_0054521c,0x4c,2);
  FUN_002f76ac(param_1 + 0x269,&UNK_0054521c,0x4c,0x10);
  return param_1;
}
