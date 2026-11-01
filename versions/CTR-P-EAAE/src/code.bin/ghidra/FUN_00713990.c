#include "../../../include/types.h"

uint FUN_00713990(int param_1)

{
  if (*(uint *)(param_1 + 0x218) == 6) {
    return 0;
  }
  return *(uint *)(param_1 + 0x218) & 0xff;
}
