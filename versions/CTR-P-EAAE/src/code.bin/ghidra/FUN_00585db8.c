#include "../../../include/types.h"

void FUN_00585db8(int param_1)

{
  if (*(char *)(param_1 + 7) == '\x01' || *(char *)(param_1 + 7) == '\x03') {
    FUN_00583310();
  }
  *(undefined1 *)(param_1 + 7) = 5;
  FUN_00584074();
}
