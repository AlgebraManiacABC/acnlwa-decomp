#include "../../../include/types.h"

void FUN_001aec00(byte *param_1,byte param_2)

{
  *param_1 = *param_1 & 0xf0 | param_2 & 0xf;
  return;
}
