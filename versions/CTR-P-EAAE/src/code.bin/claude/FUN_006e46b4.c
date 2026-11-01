#include "../../../include/types.h"

void FUN_006e46b4(int param_1)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfffc | 2;
  return;
}
