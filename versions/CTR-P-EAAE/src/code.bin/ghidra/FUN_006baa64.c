/**
 * FUN_006baa64.c
 * Source line: 1017304
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_006baa64(ushort *param_1)

{
  bool bVar1;
  
  bVar1 = (*param_1 & 0x6000) == 0x4000;
  if (bVar1) {
    *param_1 = *param_1 & 0x9fff | 0x2000;
  }
  return bVar1;
}
