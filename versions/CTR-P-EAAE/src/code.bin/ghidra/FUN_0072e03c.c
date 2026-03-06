/**
 * FUN_0072e03c.c
 * Source line: 1085316
 * Body lines: 15
 */
#include "../../../include/types.h"

char FUN_0072e03c(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (**(code **)(*param_1 + 8))(param_1);
  cVar1 = '\0';
  if (uVar2 != 0) {
    iVar3 = (**(code **)(*param_1 + 0xc))(param_1);
    uVar4 = iVar3 + uVar2;
    cVar1 = '\0';
    while (uVar2 = (uint)*(byte *)(uVar2 + 1) + uVar2 + 2, uVar2 <= uVar4) {
      cVar1 += '\x01';
    }
  }
  return cVar1;
}
