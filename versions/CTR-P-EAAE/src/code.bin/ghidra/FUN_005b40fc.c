/**
 * FUN_005b40fc.c
 * Source line: 864352
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005b40fc(uint param_1)

{
  bool bVar1;
  
  bVar1 = param_1 == 0xa5;
  if (0xa5 < param_1) {
    param_1 = 0;
  }
  if (bVar1) {
    param_1 = (uint)BYTE_00957322;
  }
  return *(undefined4 *)(&DAT_009575d8 + param_1 * 4);
}
