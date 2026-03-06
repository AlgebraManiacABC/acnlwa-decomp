/**
 * FUN_00136480.c
 * Source line: 142891
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00136480(void)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = piRam00974ab8;
  do {
    while (*piVar2 < 1) {
      ClearExclusiveLocal();
      nn::svc::ArbitrateAddress(HRam0097dff8,(uint)piVar2,ARBITRATION_TYPE_WAIT_IF_LESS_THAN,0);
    }
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = -*piVar2;
  while (*piVar2 != -1) {
    nn::svc::ArbitrateAddress(HRam0097dff8,(uint)piVar2,ARBITRATION_TYPE_WAIT_IF_LESS_THAN,-1);
  }
  return;
}
