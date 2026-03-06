/**
 * FUN_006e5718.c
 * Source line: 1043337
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_006e5718(uint param_1)

{
  int iVar1;
  
  if (iRam00a159d0 != 0) {
    if ((0x275 < param_1) || (iVar1 = iRam00a159d0 + param_1 * 0x12, iVar1 == 0)) {
      iVar1 = iRam00a159d0;
    }
    return iVar1;
  }
  uRam00a14b48 = 0;
  uRam00a14b4c = 0;
  uRam00a14b50 = 0;
  uRam00a14b54 = 0;
  uRam00a14b58 = 0;
  return 0xa14b48;
}
