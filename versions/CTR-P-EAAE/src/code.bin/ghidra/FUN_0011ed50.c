/**
 * FUN_0011ed50.c
 * Source line: 121769
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 * FUN_0011ed50(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00120540(param_1,param_2,"RootTask");
  *puVar1 = &UNK_008f8d14;
  *(undefined1 *)(puVar1 + 0x6b) = 0;
  *(undefined1 *)((int)puVar1 + 0x1ad) = 0;
  puVar1[0x6c] = 0;
  puVar1[0x6d] = &UNK_00905fdc;
  puVar1[0x6e] = 0x10000;
  puVar1[0x6f] = 0x2000;
  puVar1[0x70] = 0x2000;
  puVar1[0x71] = 0x2332;
  puVar1[0x72] = 1;
  puVar1[0x73] = 0x140d;
  *(undefined1 *)(puVar1 + 0x74) = 1;
  return puVar1;
}
