/**
 * FUN_00271d0c.c
 * Source line: 319225
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00271d0c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = param_2 + (*(byte *)(param_2 + 0x24) & 1) * 0x94;
  bVar3 = *(char *)(iVar2 + 0x2a8) == '\0';
  if (!bVar3) {
    iVar2 += 0x2ac;
    bVar3 = iVar2 == 0;
  }
  if (!bVar3) {
    FUN_004df2c8(param_1,param_1,param_1,0x3f800000,iVar2);
    return 1;
  }
  uVar1 = FUN_0032821c(param_2 + 0x27c);
  return uVar1;
}
