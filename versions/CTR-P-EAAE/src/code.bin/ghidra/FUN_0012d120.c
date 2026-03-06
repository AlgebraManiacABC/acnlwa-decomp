/**
 * FUN_0012d120.c
 * Source line: 133778
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0012d120(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094e3cc;
  if (puRam0094e3cc != NULL) {
    puRam0094e3cc = NULL;
    (**(code **)*puVar1)();
    if (DAT_0094e3c8 != 0) {
      FUN_002ffb64();
    }
    DAT_0094e3c8 = 0;
  }
  return;
}
