#include "../../../include/types.h"

void FUN_002c24ac(int param_1)

{
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfe;
  return;
}
