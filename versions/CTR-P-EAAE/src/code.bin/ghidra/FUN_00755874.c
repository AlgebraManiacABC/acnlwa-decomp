/**
 * FUN_00755874.c
 * Source line: 1111322
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_00755874(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar1 = FUN_0073663c(param_1 + 8);
    return (iVar1 + (1 << (*(uint *)(param_1 + 0x68) & 0xff))) - 1U >>
           (*(uint *)(param_1 + 0x68) & 0xff);
  }
  uVar2 = FUN_0073663c(param_1 + 8);
  return uVar2;
}
