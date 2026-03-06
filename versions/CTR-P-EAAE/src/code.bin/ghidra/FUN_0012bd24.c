/**
 * FUN_0012bd24.c
 * Source line: 132685
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_0012bd24(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0013208c();
  *puVar1 = &PTR_DAT_00904458;
  *(undefined1 *)(puVar1 + 10) = 0;
  puVar1[0xb] = &DAT_009047f8;
  puVar1[0xc] = &UNK_008a3ba0;
  puVar1[0xd] = &DAT_009047f8;
  puVar1[0xe] = &UNK_008a3ba0;
  puVar1[0xf] = &DAT_009047f8;
  puVar1[0x10] = &UNK_008a3ba0;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = &UNK_00131560;
  return puVar1;
}
