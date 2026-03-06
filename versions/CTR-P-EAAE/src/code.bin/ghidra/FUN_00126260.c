/**
 * FUN_00126260.c
 * Source line: 127984
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00126260(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0095c718;
  if (puRam0095c718 != NULL) {
    puRam0095c718 = NULL;
    (**(code **)*puVar1)();
    if (iRam0095c714 != 0) {
      FUN_002ffb64();
    }
    iRam0095c714 = 0;
  }
  return;
}
