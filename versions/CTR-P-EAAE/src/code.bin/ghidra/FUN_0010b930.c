/**
 * FUN_0010b930.c
 * Source line: 109639
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0010b930(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_FUN_0056a3d8(param_1 + 0xb0c,param_1 + 0x14);
  iVar1 = FUN_00306978(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xb1a) != '\0') {
      FUN_00306cf0(param_1,0x3f);
    }
    uVar2 = 1;
  }
  return uVar2;
}
