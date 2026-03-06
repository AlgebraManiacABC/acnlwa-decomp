/**
 * FUN_003483a4.c
 * Source line: 444971
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_003483a4(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0013cc9c(0xae0c40);
  if (puVar1 != NULL) {
    *puVar1 = &UNK_008fae28;
    puVar1[1] = param_3;
    *param_2 = puVar1;
    return 0;
  }
  software_interrupt(CloseHandle);
  return 0xd8604659;
}
