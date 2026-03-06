/**
 * FUN_00618578.c
 * Source line: 930082
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00618578(int param_1)

{
  uint uVar1;
  
  if (((*(byte *)(param_1 + 0x13268) != 0) && (*(char *)(param_1 + 0x132ae) == '\0')) &&
     ((*(byte *)(param_1 + 0x13268) < 4 || (uVar1 = FUN_0075f578(param_1 + 0xb0), uVar1 < 4)))) {
    FUN_002fb94c();
    return;
  }
  return;
}
