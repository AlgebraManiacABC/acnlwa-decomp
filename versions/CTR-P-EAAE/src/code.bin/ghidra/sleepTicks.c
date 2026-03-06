/**
 * sleepTicks.c
 * Source line: 144827
 * Body lines: 9
 */
#include "../../../include/types.h"

void sleepTicks(q32_32 ticks32_32)

{
  uint uVar1;
  
  uVar1 = ticks32_32.high;
  nn::svc::SleepThread
            (((ulonglong)ticks32_32 & 0xffffffff) * 3 +
             ((ulonglong)
              (uint)(((int)uVar1 >> 31) * -0x452cb512 + (int)((ulonglong)uVar1 * 0xbad34aee >> 32))
              << 32 | (ulonglong)uVar1 * 0xbad34aee & 0xffffffff) +
             CONCAT44(uVar1 * 3,(int)(((ulonglong)ticks32_32 & 0xffffffff) * 0xbad34aee >> 32)));
  return;
}
