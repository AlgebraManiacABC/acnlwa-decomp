/**
 * FUN_0053df24.c
 * Source line: 782891
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0053df24(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00543c54(param_1,0x1c,0x14,0x18,0xf);
  *puVar1 = &PTR_DAT_00903d64;
  *(undefined1 *)(puVar1 + 0x4d) = 0;
  puVar1[0x4e] = param_2;
  puVar1[0x50] = puVar1 + 0x4f;
  puVar1[0x51] = 0;
  puVar1[0x4f] = puVar1 + 0x4f;
  puVar1[0x54] = puVar1 + 0x53;
  puVar1[0x55] = 0;
  puVar1[0x53] = puVar1 + 0x53;
  puVar1[0x52] = 4;
  puVar1[0x56] = 0x14c;
  return;
}
