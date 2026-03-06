/**
 * FUN_002a9cd8.c
 * Source line: 348220
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002a9cd8(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  FUN_0030f48c(iVar1 + 0x104,"%s",param_2,param_4);
  *(undefined4 *)(iVar1 + 0x130) = param_3;
  return;
}
