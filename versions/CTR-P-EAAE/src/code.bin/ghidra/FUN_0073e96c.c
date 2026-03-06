/**
 * FUN_0073e96c.c
 * Source line: 1097197
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_0073e96c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = param_4;
  iVar1 = FUN_00141a9c(param_1,&local_8,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)(char)((uint)local_8 >> 8);
  }
  return iVar2;
}
