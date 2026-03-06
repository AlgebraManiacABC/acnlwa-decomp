/**
 * FUN_00415208.c
 * Source line: 580902
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00415208(void)

{
  if (piRam00974a58 != NULL) {
    FUN_00415d24();
    if (piRam00974a58 != NULL) {
      (**(code **)(*piRam00974a58 + 4))();
    }
    piRam00974a58 = NULL;
  }
  return;
}
