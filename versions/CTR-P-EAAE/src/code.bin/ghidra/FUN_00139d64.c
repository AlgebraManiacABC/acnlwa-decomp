/**
 * FUN_00139d64.c
 * Source line: 146751
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00139d64(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094d094;
  if (puRam0094d094 != NULL) {
    puRam0094d094 = NULL;
    (**(code **)*puVar1)();
    if (iRam0094d090 != 0) {
      FUN_0013d444();
      FUN_002ffb64();
    }
    iRam0094d090 = 0;
  }
  return;
}
