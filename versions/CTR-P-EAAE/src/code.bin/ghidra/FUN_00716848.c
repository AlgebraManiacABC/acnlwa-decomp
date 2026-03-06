/**
 * FUN_00716848.c
 * Source line: 1070625
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00716848(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x2f) {
    iVar1 = 0;
    do {
      if (((byte)(&UNK_0088f29c)[iVar1] == param_2) || ((byte)(&UNK_0088f29d)[iVar1] == param_2)) {
        return 1;
      }
      iVar1 += 2;
    } while (iVar1 < 0x28);
  }
  return 0;
}
