/**
 * FUN_00350d9c.c
 * Source line: 452784
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00350d9c(void)

{
  bool bVar1;
  
  do {
    while (iRam0097d884 < 1) {
      ClearExclusiveLocal();
      nn::svc::ArbitrateAddress(HRam0097dff8,0x97d884,ARBITRATION_TYPE_WAIT_IF_LESS_THAN,0);
    }
    bVar1 = (bool)hasExclusiveAccess(0x97d884);
  } while (!bVar1);
  iRam0097d884 = iRam0097d884 + 1;
  return;
}
