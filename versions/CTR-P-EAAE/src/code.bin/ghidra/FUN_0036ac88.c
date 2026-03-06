/**
 * FUN_0036ac88.c
 * Source line: 472900
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined2 FUN_0036ac88(void)

{
  int *piVar1;
  undefined2 *puVar2;
  
  if (cRam0096b8f6 != '\0') {
    piVar1 = (int *)FUN_007d5870(uRam0096b950);
    if (*piVar1 != 0) {
      puVar2 = (undefined2 *)(iRam00adce40 + *piVar1 * 2);
      goto LAB_0036acbc;
    }
  }
  puVar2 = (undefined2 *)0xadce44;
LAB_0036acbc:
  return *puVar2;
}
