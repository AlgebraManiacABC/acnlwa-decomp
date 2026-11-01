#include "../../../include/types.h"

ushort FUN_00768800(int param_1)

{
  return *(ushort *)(param_1 + 2) & 0x3fff;
}
