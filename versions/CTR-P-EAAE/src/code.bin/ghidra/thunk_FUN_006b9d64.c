#include "../../../include/types.h"

void thunk_FUN_006b9d64(int param_1)

{
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xc000 | 0x200;
  return;
}
