/**
 * FUN_00752bf4.c
 * Source line: 1109035
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00752bf4(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 auStack_4c [68];
  
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    iVar1 = FUN_00152a10(auStack_4c,4,param_1,0,0);
    if (iVar1 == 0) {
      *param_2 = 0xff;
      param_2[3] = (char)auStack_4c._64_4_;
      param_2[2] = SUB41(auStack_4c._64_4_,1);
      param_2[1] = SUB41(auStack_4c._64_4_,2);
      return 1;
    }
  }
  return 0;
}
