#include "../../../include/types.h"

void FUN_005739fc(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x300);
  if (piVar1 == NULL) {
    return;
  }
  (**(code **)(*piVar1 + 0x1c))
            (piVar1,*(char *)(param_1 + 0x5ec) == '\x01' || *(char *)(param_1 + 0x5ec) == '\x04');
  return;
}
