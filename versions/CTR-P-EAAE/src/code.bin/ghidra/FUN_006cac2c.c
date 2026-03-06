/**
 * FUN_006cac2c.c
 * Source line: 1027779
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_006cac2c(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while (((byte)(&UNK_0088e4ec)[uVar1] != param_1 && ((byte)(&UNK_0088e4ed)[uVar1] != param_1))) {
    uVar1 += 2;
    if (9 < uVar1) {
      return 0;
    }
  }
  return 1;
}
