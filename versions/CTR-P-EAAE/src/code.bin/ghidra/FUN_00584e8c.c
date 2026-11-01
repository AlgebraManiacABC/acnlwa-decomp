#include "../../../include/types.h"

void FUN_00584e8c(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '(') {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x1e) = 0;
  FUN_0058d3fc(5);
  FUN_005833c4(0x1000270);
  return;
}
