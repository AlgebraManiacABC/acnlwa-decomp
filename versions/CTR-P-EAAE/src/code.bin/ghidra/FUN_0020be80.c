#include "../../../include/types.h"

void FUN_0020be80(int param_1,uint param_2)

{
  if (param_2 < 0x6c) {
    param_1 += param_2 >> 3;
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & ~(byte)(1 << (param_2 & 7));
  }
  return;
}
