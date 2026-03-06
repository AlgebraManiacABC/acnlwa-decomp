/**
 * FUN_00237d58.c
 * Source line: 289301
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_00237d58(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x20f) == '\0';
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x20f) = 1;
    FUN_0013cd00(param_1 + 0x180,param_2,0xffffffff);
    *(undefined4 *)(param_1 + 0x1ac) = param_3;
  }
  return bVar1;
}
