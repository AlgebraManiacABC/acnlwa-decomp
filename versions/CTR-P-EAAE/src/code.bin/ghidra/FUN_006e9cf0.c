#include "../../../include/types.h"

void FUN_006e9cf0(int param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x500) = *param_2;
  if (*(byte *)(param_1 + 0x474) < 0x1d) {
    *(undefined2 *)(param_1 + 0x49a) = *param_2;
  }
  return;
}
