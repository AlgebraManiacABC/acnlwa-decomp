/**
 * FUN_00128490.c
 * Source line: 129721
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00128490(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam00953870;
  if (puRam00953870 != NULL) {
    puRam00953870 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(DAT_0095386c);
    DAT_0095386c = 0;
  }
  return;
}
