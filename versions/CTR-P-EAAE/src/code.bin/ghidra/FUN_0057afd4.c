/**
 * FUN_0057afd4.c
 * Source line: 823484
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_0057afd4(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00746f24(&DAT_00a22020);
  if (*(uint *)(param_1 + 0x938) <= uVar1) {
    *(byte *)(param_1 + 0xb09) = *(byte *)(param_1 + 0xb09) & 0xfe;
  }
  return *(byte *)(param_1 + 0xb09) & 1 ^ 1;
}
