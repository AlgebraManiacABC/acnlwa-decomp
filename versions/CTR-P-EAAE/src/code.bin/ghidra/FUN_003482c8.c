#include "../../../include/types.h"

int FUN_003482c8(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    software_interrupt(CloseHandle);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return param_1;
}
