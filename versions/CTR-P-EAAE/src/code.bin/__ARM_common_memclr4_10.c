#include "types.h"

// TODO: verify FUN_00779548
void __ARM_common_memclr4_10(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}
