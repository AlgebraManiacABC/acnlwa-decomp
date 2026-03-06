/**
 * FUN_002fe2e0.c
 * Source line: 396312
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002fe2e0(void)

{
  q32_32 ticks32_32;
  
  if ((piRam0094cd2c != NULL) && (iRam00982868 != 0)) {
    ticks32_32 = (q32_32)_ll_sdiv(lRam009753d8,1000);
    sleepTicks(ticks32_32);
    if (cRam0094cd28 == '\0') {
      cRam0094cd28 = 1;
          // WARNING: Could not recover jumptable at 0x002fe364. Too many branches
          // WARNING: Treating indirect jump as call
      (**(code **)(*piRam0094cd2c + 0xc))(piRam0094cd2c,0x6c6f6164,0);
      return;
    }
  }
  return;
}
