/**
 * FUN_0011daac.c
 * Source line: 120787
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0011daac(void)

{
  uint uVar1;
  int local_10;
  
  if (iRam0097dff8 == 0) {
    local_10 = 0;
    uVar1 = nn::svc::CreateAddressArbiter(&local_10);
    if ((uVar1 & 0x80000000) == 0) {
      iRam0097dff8 = local_10;
    }
  }
  return;
}
