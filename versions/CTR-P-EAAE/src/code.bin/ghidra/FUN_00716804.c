/**
 * FUN_00716804.c
 * Source line: 1070608
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00716804(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while (((byte)(&UNK_0088f29c)[iVar1] != param_2 && ((byte)(&UNK_0088f29d)[iVar1] != param_2))) {
    iVar1 += 2;
    if (0x27 < iVar1) {
      return -1;
    }
  }
  return param_2 - 1;
}
