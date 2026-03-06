/**
 * FUN_0053bac8.c
 * Source line: 781285
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0053bac8(uint param_1,uint param_2)

{
  nn::svc::SleepThread
            ((ulonglong)param_1 * 3 +
             ((ulonglong)
              (uint)(((int)param_2 >> 0x1f) * -0x452cb512 +
                    (int)((ulonglong)param_2 * 0xbad34aee >> 0x20)) << 0x20 |
             (ulonglong)param_2 * 0xbad34aee & 0xffffffff) +
             CONCAT44(param_2 * 3,(int)((ulonglong)param_1 * 0xbad34aee >> 0x20)));
  return;
}
