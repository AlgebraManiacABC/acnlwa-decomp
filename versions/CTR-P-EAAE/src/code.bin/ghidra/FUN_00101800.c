/**
 * FUN_00101800.c
 * Source line: 105194
 * Body lines: 11
 */
#include "../../../include/types.h"

short * FUN_00101800(short *param_1,short *param_2,int param_3)

{
  short *psVar1;
  bool bVar2;
  
  psVar1 = param_1;
  while (bVar2 = param_3 != 0, param_3 += -1, bVar2) {
    *psVar1 = *param_2;
    psVar1 = psVar1 + 1;
    if (*param_2 != 0) {
      param_2 = param_2 + 1;
    }
  }
  return param_1;
}
