#include "../../../include/types.h"

void FUN_0030e7f8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & ~(1 << (param_2 & 0xff));
  return;
}
