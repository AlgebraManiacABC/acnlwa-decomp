/**
 * FUN_005a25f8.c
 * Source line: 851054
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_005a25f8(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = DAT_009526a4 == param_1;
  if (bVar1) {
    param_1 = DAT_009526a8;
  }
  return bVar1 && param_1 == param_2;
}
