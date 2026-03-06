/**
 * FUN_0070ce9c.c
 * Source line: 1064711
 * Body lines: 15
 */
#include "../../../include/types.h"

int * FUN_0070ce9c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x184))(param_1);
  if (*(char *)(iVar1 + 0x2dc) == '\0') {
    iVar1 = (**(code **)(*param_1 + 0x184))(param_1);
    if ((*(char *)(iVar1 + 0x2df) == '\0') || (*(char *)(iVar1 + 0x2dc) != '\0')) {
      return param_1 + 0x200;
    }
    iVar1 = (**(code **)(*param_1 + 0x184))(param_1);
    piVar2 = (int *)(iVar1 + 0x27c);
  }
  else {
    piVar2 = NULL;
  }
  return piVar2;
}
