/**
 * FUN_00594528.c
 * Source line: 842439
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00594528(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x154) != 0) &&
     (*(int *)(param_1 + 0x158) == *(int *)(*(int *)(param_1 + 0x154) + 0xc))) {
    FUN_002e6368(param_1 + 0x148);
  }
  if (*(char *)(param_1 + 0x161) == '\x01') {
    uVar1 = GET_BYTE_00957322();
    FUN_005a224c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),uVar1);
  }
  FUN_00590ad8(param_1);
  return;
}
