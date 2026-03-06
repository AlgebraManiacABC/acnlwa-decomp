/**
 * FUN_00195d74.c
 * Source line: 207113
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined1 * FUN_00195d74(int param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = *(undefined4 *)(param_1 + 0x6b5c);
  uStack_14 = *(undefined4 *)(param_1 + 0x6b58);
  local_18 = *(undefined4 *)(param_1 + 0x9f0);
  FUN_001b3340(0x98b2b8,&local_18,*(uint *)(param_1 + 0x6b6c) & 0xff);
  return (undefined1 *)&local_18;
}
