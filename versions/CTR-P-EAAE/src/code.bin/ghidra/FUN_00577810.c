/**
 * FUN_00577810.c
 * Source line: 821002
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 * FUN_00577810(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint n;
  
  if (DAT_0094f310 != 0) {
    puVar1 = (uint *)FUN_00691538();
    n = *puVar1;
    FUN_00691538();
    puVar2 = (undefined4 *)FUN_00694178();
    if (puVar2 != NULL) {
      __rt_memclr(puVar2,n);
    }
    return puVar2;
  }
  puVar2 = (undefined4 *)FUN_00529ddc();
  return puVar2;
}
