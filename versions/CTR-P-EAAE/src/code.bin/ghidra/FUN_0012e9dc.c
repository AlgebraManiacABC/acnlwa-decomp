/**
 * FUN_0012e9dc.c
 * Source line: 135286
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0012e9dc(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00952cc4;
  if (DAT_00952cc4 != NULL) {
    DAT_00952cc4 = NULL;
    (**(code **)*puVar1)();
    if (DAT_00952cc0 != NULL) {
      (**(code **)(*DAT_00952cc0 + 4))();
    }
    DAT_00952cc0 = NULL;
  }
  return;
}
