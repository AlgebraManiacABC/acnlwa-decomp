/**
 * FUN_00583934.c
 * Source line: 829732
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00583934(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_0094d080 + 0x788) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(DAT_0094d080 + 0x788) + 0xb0);
  }
  return uVar1;
}
