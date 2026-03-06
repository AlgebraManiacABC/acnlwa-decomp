/**
 * FUN_00529c80.c
 * Source line: 769826
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00529c80(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 < 0x29d) {
    uRam0094e476 = (undefined2)param_1;
    uVar2 = FUN_0051fe30(0x29d);
    iVar1 = FUN_0051fc48(uVar2,param_1,param_2,param_3,param_4);
    uRam0094e476 = 0xffff;
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0xf) != '\0')) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
