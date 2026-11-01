#include "../../../include/types.h"

void FUN_004261f4(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0xd9214824;
  *param_1 = 4;
  if (*(code **)(param_1 + 8) != NULL) {
    (**(code **)(param_1 + 8))(0xd9214824,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}
