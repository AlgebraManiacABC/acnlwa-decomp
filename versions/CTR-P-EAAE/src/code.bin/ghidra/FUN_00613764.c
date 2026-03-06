/**
 * FUN_00613764.c
 * Source line: 926569
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00613764(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 2;
  param_1[1] = 3;
  param_1[2] = 3;
  iVar1 = FUN_00301d0c(param_1 + 4,&UNK_00612cfc,2,0x2a);
  iVar1 = FUN_00301d0c(iVar1 + 0x54,FUN_006efd9c,0x400,0x14);
  iVar1 = FUN_00301d0c(iVar1 + 0x5000,&UNK_001e036c,0x100,0x14);
  return iVar1 + -0x5058;
}
