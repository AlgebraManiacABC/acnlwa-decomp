/**
 * FUN_001285c8.c
 * Source line: 129789
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001285c8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00952624;
  if (DAT_00952624 != NULL) {
    DAT_00952624 = NULL;
    (**(code **)*puVar1)();
    if (DAT_00952620 != 0) {
      FUN_002ffb64();
    }
    DAT_00952620 = 0;
  }
  return;
}
