/**
 * FUN_001baf6c.c
 * Source line: 224678
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_001baf6c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_002fb918();
  iVar2 = FUN_007105d4(iVar1 + 0xa4f8);
  if (iVar2 != -1) {
    FUN_001e4348(iVar1 + 0xa4f8,iVar2,param_1);
  }
  return iVar2 != -1;
}
