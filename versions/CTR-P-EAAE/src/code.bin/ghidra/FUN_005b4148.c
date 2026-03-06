/**
 * FUN_005b4148.c
 * Source line: 864388
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_005b4148(undefined4 param_1)

{
  undefined4 uVar1;
  
  DAT_00957328 = 0;
  uRam0095732c = param_1;
  FUN_006e4490();
  uVar1 = DAT_00957344;
  if (BYTE_00957322 < 0xa5) {
    uVar1 = (&DAT_00957344)[BYTE_00957322];
  }
  FUN_006a6024();
  FUN_005b3ef4(uVar1,0x95787c,0);
  return 1;
}
