/**
 * FUN_00139f54.c
 * Source line: 146875
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00139f54(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094cff0;
  if (puRam0094cff0 != NULL) {
    puRam0094cff0 = NULL;
    (**(code **)*puVar1)();
    FUN_002ffb64(uRam0094cfec);
    uRam0094cfec = 0;
  }
  return;
}
