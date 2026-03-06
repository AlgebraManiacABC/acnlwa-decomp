/**
 * FUN_0012a54c.c
 * Source line: 131675
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_0012a54c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char local_1c [8];
  
  FUN_0012a518();
  iVar1 = FUN_00130360(param_1,param_2,param_3,param_4,local_1c);
  if (iVar1 < 0) {
    FUN_001292e8(iVar1,0x12a58c);
  }
  FUN_0012ab78();
  return (int)local_1c[0];
}
