/**
 * FUN_0045f368.c
 * Source line: 627192
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0045f368(void)

{
  int *piVar1;
  
  if (cRam00974a68 != '\0') {
    if (cRam00974a69 != '\0') {
      piVar1 = (int *)FUN_004264c0(4);
      (**(code **)(*piVar1 + 0x14))();
      FUN_0042640c();
      cRam00974a69 = '\0';
    }
    if (iRam00974a74 - 0x100000U < 0x3ff00000) {
      FUN_0045f918();
    }
    FUN_00426474(4);
    cRam00974a68 = '\0';
  }
  return;
}
