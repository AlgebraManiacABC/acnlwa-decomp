#include "../../../include/types.h"

void FUN_003e668c(int *param_1)

{
  *param_1 = (int)(param_1 + 1);
  FUN_007795ac();
  *(undefined1 *)(*param_1 + 1) = 2;
  *(undefined1 *)*param_1 = 8;
  return;
}
