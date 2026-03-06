/**
 * FUN_007546b4.c
 * Source line: 1110077
 * Body lines: 7
 */
#include "../../../include/types.h"

longlong FUN_007546b4(uint *param_1)

{
  longlong lVar1;
  
  if (-1 < (int)param_1[1]) {
    lVar1 = _ll_sdiv(*(longlong *)param_1,0x15180);
    return lVar1;
  }
  lVar1 = _ll_sdiv(CONCAT44(param_1[1] - (uint)(*param_1 < 0x1517f),*param_1 - 0x1517f),0x15180);
  return lVar1;
}
