/**
 * FUN_002b3c3c.c
 * Source line: 352949
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002b3c3c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00766170(param_1 + 0x2228);
  if (((iVar1 == 0) && (*(undefined **)(param_1 + 0x2194) == &UNK_0031f7e8)) &&
     (*(int *)(param_1 + 0x2198) == 0)) {
    FUN_005210a8(param_1);
    DAT_0094fd58 &= 0xffffffef;
    FUN_00818960(param_1 + 0x28,&UNK_002b3cf0,0);
  }
  return;
}
