#include "../../../include/types.h"

bool FUN_007203bc(int param_1)

{
  return *(char *)(param_1 + 0x1e) != '\x01' && *(char *)(param_1 + 0x1e) != '\x05';
}
