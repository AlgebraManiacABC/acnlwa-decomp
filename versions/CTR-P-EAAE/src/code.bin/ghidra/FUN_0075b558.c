/**
 * FUN_0075b558.c
 * Source line: 1116454
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined1 FUN_0075b558(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 1);
  if (0x26 < uVar1) {
    if ((byte *)*param_1 == NULL) {
      uVar1 = 0;
      goto LAB_0075b584;
    }
    uVar1 = (uint)*(byte *)*param_1;
  }
  if (0x26 < uVar1) {
    return 0;
  }
LAB_0075b584:
  return (&UNK_00890f12)[uVar1];
}
