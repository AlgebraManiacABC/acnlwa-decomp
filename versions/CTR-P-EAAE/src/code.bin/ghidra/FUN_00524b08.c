#include "../../../include/types.h"

void FUN_00524b08(void)

{
  int iVar1;
  
  iVar1 = iRam0095c728;
  if (iRam0095c728 == 0) {
    return;
  }
  FUN_00524838(iRam0095c728 + 0x10,0xffffffff);
  (**(code **)(*(int *)(iVar1 + 0x60) + 0x1c))(iVar1 + 0x60);
  return;
}
