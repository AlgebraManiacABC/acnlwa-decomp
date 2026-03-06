/**
 * FUN_003e4e08.c
 * Source line: 558450
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_003e4e08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xa0) - 0x100000U < 0x3ff00000) &&
     (uVar1 = FUN_00406954(*(int *)(param_1 + 0xa0),param_1 + 0xb0), (uVar1 & 0x80000000) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
