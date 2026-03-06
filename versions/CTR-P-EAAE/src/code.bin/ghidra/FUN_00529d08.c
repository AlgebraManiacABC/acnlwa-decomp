/**
 * FUN_00529d08.c
 * Source line: 769857
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_00529d08(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0x29d) {
    uRam0094e476 = (undefined2)param_1;
    uVar1 = FUN_0051fe30();
    iVar2 = FUN_0051fc14(uVar1,param_1,param_2,param_3);
    uRam0094e476 = 0xffff;
    if ((iVar2 == 0) || (*(char *)(iVar2 + 0xf) == '\0')) {
      return iVar2;
    }
  }
  return 0;
}
