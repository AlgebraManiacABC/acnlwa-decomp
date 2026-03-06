/**
 * FUN_0013f760.c
 * Source line: 151943
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0013f760(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 3) != '\0') && (param_2 < *(uint *)param_1[1])) {
    if (param_1[2] == 0) {
      uVar2 = ((uint *)param_1[1])[param_2 * 3 + 2];
      iVar1 = FUN_0013f398(*param_1);
      return iVar1 + 8 + uVar2;
    }
    return *(int *)(param_1[2] + param_2 * 4);
  }
  return 0;
}
