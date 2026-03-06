/**
 * FUN_00241cf0.c
 * Source line: 295009
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00241cf0(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while (((byte)(&UNK_00887460)[uVar1] != param_1 && ((byte)(&UNK_00887461)[uVar1] != param_1))) {
    uVar1 += 2;
    if (7 < uVar1) {
      return 0;
    }
  }
  return 1;
}
