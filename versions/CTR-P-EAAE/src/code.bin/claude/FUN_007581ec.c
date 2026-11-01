#include "../../../include/types.h"

bool FUN_007581ec(int param_1)

{
  return *(char *)(param_1 + 0x30) == '\x01' || *(char *)(param_1 + 0x30) == '\x03';
}
