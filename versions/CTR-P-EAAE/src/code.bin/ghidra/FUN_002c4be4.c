/**
 * FUN_002c4be4.c
 * Source line: 364143
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002c4be4(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)GET_BYTE_00957322();
  piVar1 = piVar2;
  if (piVar2 != (int *)0xa4) {
    piVar1 = _DAT_0094d934;
  }
  if ((piVar2 != (int *)0xa4 && piVar1 != NULL) && (DAT_00950148 != 0)) {
    (**(code **)(*piVar1 + 0x140))(piVar1,DAT_00950148 + 0xeb54);
  }
  uRam0094d92e = 0;
  return;
}
