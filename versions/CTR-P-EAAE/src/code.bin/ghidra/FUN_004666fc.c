#include "../../../include/types.h"

void FUN_004666fc(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) =
       (param_2 & 3) << 2 | *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xfff3;
  return;
}
