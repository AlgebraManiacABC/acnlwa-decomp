/**
 * FUN_00524b08.c
 * Source line: 767353
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00524b08(void)

{
  int iVar1;
  
  iVar1 = iRam0095c728;
  if (iRam0095c728 == 0) {
    return;
  }
  FUN_00524838(iRam0095c728 + 0x10,0xffffffff);
          // WARNING: Could not recover jumptable at 0x00524b3c. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(iVar1 + 0x60) + 0x1c))(iVar1 + 0x60);
  return;
}
