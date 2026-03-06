/**
 * FUN_001c3328.c
 * Source line: 229684
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001c3328(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00723f18();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x9728) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9724) = 0xffffffff;
    if (*(char *)(param_1 + 0x9720) == '\x01') {
      FUN_0031e810(param_1 + 0x9234);
      return;
    }
  }
  return;
}
