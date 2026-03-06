/**
 * FUN_001019dc.c
 * Source line: 105449
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_001019dc(void)

{
  int *piVar1;
  
  for (piVar1 = &DAT_00944438; piVar1 != (int *)0x944bf8; piVar1 = piVar1 + 1) {
    (*(code *)(*piVar1 + (int)piVar1))();
  }
  return;
}
