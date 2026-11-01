#include "../../../include/types.h"

void FUN_006b9d30(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 2) = param_2 & 0x3fff | 0x400 | *(ushort *)(param_1 + 2) & 0xc000;
  return;
}
