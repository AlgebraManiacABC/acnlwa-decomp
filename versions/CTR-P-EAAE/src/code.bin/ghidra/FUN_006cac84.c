/**
 * FUN_006cac84.c
 * Source line: 1027804
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_006cac84(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while (((byte)(&UNK_0088e4e4)[uVar1] != param_1 && ((byte)(&UNK_0088e4e5)[uVar1] != param_1))) {
    uVar1 += 2;
    if (7 < uVar1) {
      return 0;
    }
  }
  return 1;
}
