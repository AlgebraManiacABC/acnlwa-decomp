/**
 * FUN_0018a3a4.c
 * Source line: 201820
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0018a3a4(int param_1)

{
  int iVar1;
  
  FUN_0057418c();
  FUN_0018c1c0(param_1,*(undefined1 *)(param_1 + 0x8dd),*(char *)(param_1 + 0x5f8) == '\x06',0);
  iVar1 = FUN_002fcb34(0x94d748);
  if (iVar1 == 0x2f) {
    Item_Copy((Item_t *)0x94d748,(Item_t *)&DAT_0095bfdc);
  }
  return 1;
}
