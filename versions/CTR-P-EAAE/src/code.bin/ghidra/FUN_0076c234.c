/**
 * FUN_0076c234.c
 * Source line: 1129550
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0076c234(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0076c1a4();
  iVar2 = FUN_004e0f14(param_1);
  if ((((iVar2 == 0) || (iVar3 = FUN_0076bb34(param_1), iVar3 != 1)) || (iVar1 != 1)) ||
     (-1 < (int)((uint)*(byte *)(iVar2 + 0x20) * 0x10000000))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}
