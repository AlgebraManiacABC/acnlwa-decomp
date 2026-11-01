#include "../../../include/types.h"

void thunk_FUN_005c167c(uint param_1,undefined4 param_2)

{
  if (param_1 < 4) {
    *(undefined4 *)(&DAT_00aad994 + param_1 * 4) = param_2;
  }
  return;
}
