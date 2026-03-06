/**
 * FUN_0073ef50.c
 * Source line: 1097568
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0073ef50(uint *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < *param_1) && ((short)param_1[param_2 * 2 + 1] == 0x4101)) {
    iVar1 = (int)param_1 + param_1[param_2 * 2 + 2];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
