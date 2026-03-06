/**
 * FUN_0050a004.c
 * Source line: 749583
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0050a004(void)

{
  int *piVar1;
  
  for (piVar1 = (int *)iRam00ad6604; piVar1 != (int *)0xad6604; piVar1 = (int *)*piVar1) {
    if (*(char *)(piVar1 + 0x61) != '\0') {
      (**(code **)(piVar1[-1] + 8))(piVar1 + -1,piVar1[0x5f] < 9999);
    }
  }
  return;
}
