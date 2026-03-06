/**
 * FUN_002f94ec.c
 * Source line: 391841
 * Body lines: 3
 */
#include "../../../include/types.h"

undefined8 FUN_002f94ec(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_4 * param_1 +
                  param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}
