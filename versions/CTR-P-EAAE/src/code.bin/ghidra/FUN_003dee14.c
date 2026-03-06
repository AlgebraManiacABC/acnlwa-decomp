/**
 * FUN_003dee14.c
 * Source line: 554118
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_003dee14(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  while( true ) {
    if (iVar2 == param_2) {
      return 1;
    }
    iVar1 = FUN_003dec70(param_1,*(undefined2 *)(iVar2 + 8),*(undefined2 *)(iVar2 + 10));
    if (iVar1 == 0) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  return 0;
}
