/**
 * FUN_0056c204.c
 * Source line: 813414
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0056c204(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  software_interrupt(GetSystemTick);
  uRam0095c510 = param_1;
  uRam0095c514 = param_2;
  FUN_00124130(&local_10);
  uRam0095c518 = local_10;
  uRam0095c51c = uStack_c;
  uRam0095c4d1 = 1;
  uRam0095c500 = 0;
  uRam0095c504 = 0;
  return;
}
