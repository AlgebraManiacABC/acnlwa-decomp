#include "../../../include/types.h"

void FUN_00625c20(int param_1,uint param_2)

{
  if (param_2 < 4) {
    *(undefined1 *)(param_1 + param_2) = 0xa5;
    *(undefined1 *)(param_1 + param_2 + 4) = 4;
  }
  return;
}
