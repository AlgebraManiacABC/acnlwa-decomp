/**
 * FUN_0017963c.c
 * Source line: 193408
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0017963c(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = iRam0097519c;
  *(undefined2 *)(iRam0097519c + 0xc81e) = param_2;
  puVar4 = (undefined4 *)(iRam00975198 + 0x2a10);
  puVar2 = (undefined4 *)(iRam00975198 + 0x2a18);
  *puVar4 = 0;
  *puVar2 = 0xffffffff;
  uVar3 = FUN_0013d148(84000);
  *puVar4 = uVar3;
  FUN_0013d1cc(param_1,iVar1,0xe4c0,0,1,FUN_001713bc);
  return;
}
