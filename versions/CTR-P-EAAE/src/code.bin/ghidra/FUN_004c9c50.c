#include "../../../include/types.h"

void FUN_004c9c50(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x2c) != param_2) {
    *(char *)(param_1 + 0x2c) = (char)param_2;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}
