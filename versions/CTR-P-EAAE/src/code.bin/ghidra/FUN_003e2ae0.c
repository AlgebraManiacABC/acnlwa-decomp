/**
 * FUN_003e2ae0.c
 * Source line: 556835
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined1 * FUN_003e2ae0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 local_10;
  ushort local_c;
  
  FUN_00426644(&local_10,*(undefined4 *)(param_1 + 0x304),*(uint *)(param_1 + 0x300) & 0xffff);
  uVar1 = *(uint *)(*(int *)(iRam00974a48 + 0x20) + 0x14) & 0xffff;
  if (1 < uVar1) {
    uVar1 = 1;
  }
  uVar1 += local_c;
  if (uRam0097e9ec < uVar1) {
    uVar1 = (uint)uRam0097e9ea;
  }
  *param_2 = local_10;
  *(short *)(param_2 + 1) = (short)uVar1;
  return (undefined1 *)&local_10;
}
