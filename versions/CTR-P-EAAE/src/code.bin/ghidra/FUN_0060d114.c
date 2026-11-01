#include "../../../include/types.h"

void FUN_0060d114(int param_1,byte param_2)

{
  *(byte *)(param_1 + 9) = (*(byte *)(param_1 + 9) & 0xfc) + (param_2 & 3);
  return;
}
