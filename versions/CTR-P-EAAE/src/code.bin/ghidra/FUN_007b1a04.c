/**
 * FUN_007b1a04.c
 * Source line: 1154394
 * Body lines: 5
 */
#include "../../../include/types.h"

longlong FUN_007b1a04(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return (ulonglong)param_1 * (ulonglong)param_4 +
         ((ulonglong)
          (((int)param_2 >> 0x1f) * param_3 + (int)((ulonglong)param_3 * (ulonglong)param_2 >> 0x20)
          ) << 0x20 | (ulonglong)param_3 * (ulonglong)param_2 & 0xffffffff) +
         CONCAT44(param_4 * param_2,(int)((ulonglong)param_3 * (ulonglong)param_1 >> 0x20));
}
