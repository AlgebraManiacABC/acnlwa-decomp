/**
 * FUN_0056caac.c
 * Source line: 813821
 * Body lines: 7
 */
#include "../../../include/types.h"

FUN_0056caac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  uint local_18;
  int iStack_14;
  
  FUN_0012f974(&local_18,param_1,param_2,param_3,param_4,param_5,param_6,0);
  lVar1 = (ulonglong)(local_18 - uRam0095c528) * 1000000;
  return CONCAT44((iStack_14 - (iRam0095c52c + (uint)(local_18 < uRam0095c528))) * 1000000 +
                  (int)((ulonglong)lVar1 >> 0x20),(int)lVar1);
}
