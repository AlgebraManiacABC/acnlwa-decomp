#include "../../../include/types.h"

void FUN_00454dc0(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x1e) = param_2 & 0xfffe;
  uRam00ae5aca = param_2 & 0xfffe;
  return;
}
