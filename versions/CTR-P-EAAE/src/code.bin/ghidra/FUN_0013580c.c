/**
 * FUN_0013580c.c
 * Source line: 142107
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0013580c(int *param_1)

{
  bool bVar1;
  
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = -*param_1;
  nn::svc::ArbitrateAddress(HRam0097dff8,(uint)param_1,ARBITRATION_TYPE_SIGNAL,-1);
  return;
}
