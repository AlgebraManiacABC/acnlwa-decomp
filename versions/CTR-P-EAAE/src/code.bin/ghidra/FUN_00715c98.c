/**
 * FUN_00715c98.c
 * Source line: 1069978
 * Body lines: 3
 */
#include "../../../include/types.h"

bool FUN_00715c98(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0029b88c(param_2);
  return *(uint *)(iVar1 + 0xc) <= *(uint *)(param_1 + param_2 * 4 + 0x1c);
}
