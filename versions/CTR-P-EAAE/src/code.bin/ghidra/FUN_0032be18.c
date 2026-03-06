/**
 * FUN_0032be18.c
 * Source line: 431459
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0032be18(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = SBORROW4(param_1,10);
  iVar1 = param_1 + -10;
  if (param_1 < 10) {
    bVar2 = SBORROW4(param_2,0x13);
    iVar1 = param_2 + -0x13;
  }
  if (iVar1 < 0 == bVar2) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(&UNK_0083b1b0 + param_2 * 2 + param_1 * 0x26);
  }
  return iVar1;
}
