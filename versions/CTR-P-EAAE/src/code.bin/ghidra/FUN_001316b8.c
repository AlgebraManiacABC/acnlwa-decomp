#include "../../../include/types.h"

void FUN_001316b8(int *param_1)

{
  if ((char)param_1[0x13] != '\0') {
    (**(code **)(*param_1 + 0x28))();
    return;
  }
  return;
}
