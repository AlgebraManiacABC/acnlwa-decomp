/**
 * FUN_002bee04.c
 * Source line: 359347
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_002bee04(int param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_002be93c(param_1 + uVar2 * 0x7dd80 + 0x2588,param_2,param_4);
    if (iVar1 != 0) {
      if (param_3 != NULL) {
        *param_3 = (char)uVar2;
      }
      return iVar1;
    }
    uVar2 += 1;
  } while (uVar2 < 3);
  return 0;
}
