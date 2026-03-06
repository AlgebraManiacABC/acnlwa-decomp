/**
 * FUN_00425840.c
 * Source line: 589395
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00425840(void)

{
  int *piVar1;
  
  if (cRam00974a4c != '\0') {
    if (cRam00974a4d != '\0') {
      piVar1 = (int *)FUN_004264d8();
      (**(code **)(*piVar1 + 0x14))();
      FUN_0042640c();
      cRam00974a4d = '\0';
    }
    FUN_00426474(3);
    cRam00974a4c = '\0';
  }
  return;
}
