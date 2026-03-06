/**
 * FUN_006dd7e8.c
 * Source line: 1038162
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_006dd7e8(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 3) {
    param_1 += param_2 * 0x10;
    iVar1 = FUN_006cc934(*(undefined1 *)(param_1 + 0x6b60));
    if (iVar1 != 0) {
      return param_1 + 0x6b64;
    }
  }
  return 0;
}
