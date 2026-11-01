#include "../../../include/types.h"

bool FUN_0071aa88(int param_1,uint param_2)

{
  return ((uint)*(byte *)(param_1 + 4) & 1 << (param_2 & 0xff)) != 0;
}
