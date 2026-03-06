/**
 * FUN_00122fd4.c
 * Source line: 125158
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00122fd4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0094cd0c;
  if (DAT_0094cd0c != NULL) {
    DAT_0094cd0c = NULL;
    (**(code **)*puVar1)();
    if (DAT_0094cd08 != NULL) {
      (**(code **)(*DAT_0094cd08 + 4))();
    }
    DAT_0094cd08 = NULL;
  }
  return;
}
