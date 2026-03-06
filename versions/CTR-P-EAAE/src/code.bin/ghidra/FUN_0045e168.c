/**
 * FUN_0045e168.c
 * Source line: 626463
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0045e168(void)

{
  if (piRam0097d460 != NULL) {
    (**(code **)(*piRam0097d460 + 4))();
    piRam0097d460 = NULL;
  }
  return;
}
