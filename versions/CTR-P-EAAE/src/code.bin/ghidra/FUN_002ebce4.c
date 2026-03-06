/**
 * FUN_002ebce4.c
 * Source line: 384488
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_002ebce4(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 3;
  param_1[1] = 3;
  iVar1 = FUN_00301d0c(param_1 + 2,&UNK_00612cfc,2,0x10);
  iVar1 = FUN_00301d0c(iVar1 + 0x20,FUN_006efd9c,0x400,4);
  iVar1 = FUN_00301d0c(iVar1 + 0x1000,&UNK_0024ea34,4,2);
  return iVar1 + -0x1022;
}
