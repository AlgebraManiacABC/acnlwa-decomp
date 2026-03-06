/**
 * FUN_0013ba04.c
 * Source line: 148220
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0013ba04(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam009752bc;
  if (puRam009752bc != NULL) {
    puRam009752bc = NULL;
    (**(code **)*puVar1)();
    if (piRam009752b8 != NULL) {
      (**(code **)(*piRam009752b8 + 8))();
    }
    piRam009752b8 = NULL;
  }
  return;
}
