#include "../../../include/types.h"

void FUN_006b9914(int param_1)

{
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfffe;
  return;
}
