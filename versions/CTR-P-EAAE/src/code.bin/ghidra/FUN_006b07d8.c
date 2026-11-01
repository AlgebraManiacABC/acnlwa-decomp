#include "../../../include/types.h"

void FUN_006b07d8(int param_1)

{
  *(undefined4 *)(param_1 + 0x560) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x564) = 0x3f800000;
  *(byte *)(param_1 + 0x574) = *(byte *)(param_1 + 0x574) | 2;
  FUN_00568c10(param_1 + 0x4bc);
}
