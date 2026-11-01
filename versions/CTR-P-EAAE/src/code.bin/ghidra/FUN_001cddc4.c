#include "../../../include/types.h"

void FUN_001cddc4(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xcf | (param_2 & 3) << 4;
  return;
}
