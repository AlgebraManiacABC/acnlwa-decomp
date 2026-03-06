/**
 * FUN_00132e2c.c
 * Source line: 139260
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00132e2c(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094e4bc;
  if (puRam0094e4bc != NULL) {
    puRam0094e4bc = NULL;
    (**(code **)*puVar1)();
    if (_DAT_0094e4b8 != NULL) {
      (**(code **)(*_DAT_0094e4b8 + 4))();
    }
    _DAT_0094e4b8 = NULL;
  }
  return;
}
