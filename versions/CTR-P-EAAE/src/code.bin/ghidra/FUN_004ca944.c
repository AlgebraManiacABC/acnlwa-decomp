#include "../../../include/types.h"

void FUN_004ca944(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x17) != param_2) {
    *(char *)(param_1 + 0x17) = (char)param_2;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 2;
  }
  return;
}
