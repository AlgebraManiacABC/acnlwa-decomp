/**
 * FUN_0027680c.c
 * Source line: 321422
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0027680c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 0x1000f83) {
    *(undefined4 *)(param_1 + 0xc0) = 0xc;
    *(undefined4 *)(param_1 + 0xc4) = param_3;
  }
  else if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined1 *)(param_1 + 0x54) = 0;
    if ((param_2 == 0x1000f23) && (iVar1 = GET_BYTE_00957322(), iVar1 == 0x2b)) {
      FUN_00342ce4(param_1 + 0x58,0x1000f24,param_3);
      return;
    }
    FUN_0032ba1c(param_1 + 0xc,param_2,param_3);
    return;
  }
  return;
}
