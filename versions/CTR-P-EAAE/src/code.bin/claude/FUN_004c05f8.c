#include "../../../include/types.h"

int FUN_004c05f8(int param_1,uint param_2)

{
  return *(int *)(param_1 + 0x1c) + (param_2 & 0xffffff) * 0x5c;
}
