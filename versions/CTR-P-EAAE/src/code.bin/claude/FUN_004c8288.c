#include "../../../include/types.h"

void FUN_004c8288(int param_1)

{
  if (*(char *)(param_1 + 400) != '\0') {
    FUN_004c5750(param_1 + 0x11c);
    FUN_004c92e8(param_1 + 0x13c);
    *(undefined1 *)(param_1 + 400) = 0;
  }
  FUN_004bfc64(param_1);
  return;
}
