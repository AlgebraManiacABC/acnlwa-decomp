/**
 * FUN_005b4428.c
 * Source line: 864613
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005b4428(byte param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  if (param_2 == 6) {
    param_2 = (uint)bRam009503bf;
  }
  if (param_4 == 6) {
    param_4 = (uint)bRam009503c1;
  }
  BYTE_00957323 = param_1;
  FUN_00606a24(1,param_2,param_3,param_4,param_5,0);
  uRam00ac196c = 0xa5;
  uRam00ac1984 = 0;
  uRam00ac1988 = 0;
  return;
}
