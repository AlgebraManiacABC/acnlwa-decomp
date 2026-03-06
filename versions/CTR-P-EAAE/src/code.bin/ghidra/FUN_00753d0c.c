/**
 * FUN_00753d0c.c
 * Source line: 1109655
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_00753d0c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = FUN_0073666c(param_1 + 8);
    return (iVar1 + (1 << (*(uint *)(param_1 + 100) & 0xff))) - 1U >>
           (*(uint *)(param_1 + 100) & 0xff);
  }
  uVar2 = FUN_0073666c(param_1 + 8);
  return uVar2;
}
