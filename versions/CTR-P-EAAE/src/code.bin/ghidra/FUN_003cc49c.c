/**
 * FUN_003cc49c.c
 * Source line: 538582
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_003cc49c(undefined4 *param_1)

{
  code *pcVar1;
  
  *param_1 = &UNK_008fe7ec;
  if (param_1[3] != 0) {
    pcVar1 = *(code **)(param_1[3] + -8);
    if (pcVar1 == NULL) {
      FUN_002f83b0();
    }
    else {
      (*pcVar1)();
    }
  }
  *param_1 = &UNK_008fc18c;
  param_1[1] = 0;
  return param_1;
}
