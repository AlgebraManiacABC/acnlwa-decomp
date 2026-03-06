/**
 * FUN_0056be20.c
 * Source line: 813235
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined8 FUN_0056be20(undefined4 *param_1)

{
  longlong lVar1;
  uint local_10;
  int local_c;
  
  FUN_00129698(&local_10,*param_1,(int)*(char *)(param_1 + 1),(int)*(char *)((int)param_1 + 5),
               (int)*(char *)((int)param_1 + 7),(int)*(char *)(param_1 + 2),
               (int)*(char *)((int)param_1 + 9),(int)*(short *)((int)param_1 + 10));
  lVar1 = (ulonglong)(local_10 - uRam0095c528) * 1000000;
  return CONCAT44((local_c - (iRam0095c52c + (uint)(local_10 < uRam0095c528))) * 1000000 +
                  (int)((ulonglong)lVar1 >> 0x20),(int)lVar1);
}
