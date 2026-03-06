/**
 * FUN_005936c0.c
 * Source line: 841903
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_005936c0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_004f1294(param_1 + 0x58);
  FUN_00590c14(0,param_1,1);
  iVar2 = FUN_007460e8(param_1 + 0x124);
  uVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x16d);
    if ((cVar1 != '\0') && ((cVar1 == '\x01' || ((cVar1 != '\x02' && (cVar1 == '\x03')))))) {
      return 1;
    }
    uVar3 = 2;
  }
  return uVar3;
}
