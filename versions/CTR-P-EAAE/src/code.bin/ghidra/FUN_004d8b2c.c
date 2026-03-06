/**
 * FUN_004d8b2c.c
 * Source line: 720335
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 * FUN_004d8b2c(undefined4 *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x3b) != '\0') {
    iVar1 = 0;
    do {
      FUN_007a86d4(iVar1);
      iVar1 += 1;
    } while (iVar1 < 4);
    FUN_00141b18(1,param_1 + 1);
    *(undefined1 *)(param_1 + 0x3b) = 0;
    FUN_007ace48(0);
    FUN_007a83dc(*param_1);
  }
  return param_1;
}
