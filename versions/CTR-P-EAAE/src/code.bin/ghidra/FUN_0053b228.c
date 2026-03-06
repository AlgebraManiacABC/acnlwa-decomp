/**
 * FUN_0053b228.c
 * Source line: 780835
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_0053b228(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  lVar1 = (ulonglong)param_3 * 3 +
          ((ulonglong)
           (uint)(((int)param_4 >> 0x1f) * -0x452cb512 +
                 (int)((ulonglong)param_4 * 0xbad34aee >> 0x20)) << 0x20 |
          (ulonglong)param_4 * 0xbad34aee & 0xffffffff) +
          CONCAT44(param_4 * 3,(int)((ulonglong)param_3 * 0xbad34aee >> 0x20));
  software_interrupt(WaitSynchronization1);
  if (-((int)uVar2 >> 0x1f) != 0) {
    FUN_0012f204(uVar2,-((int)uVar2 >> 0x1f),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  }
  return (uVar2 & 0x3ff) != 0x3fe;
}
