/**
 * FUN_004cb7a4.c
 * Source line: 710799
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004cb7a4(int param_1,uint param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    if ((*(char *)(iVar1 + 0x139) != '\0') && ((*(char *)(iVar1 + 0x138) != '\0') != param_2)) {
      *(char *)(iVar1 + 0x138) = (char)param_2;
      FUN_004ca944(*(undefined4 *)(iVar1 + 0x1a8),param_2);
    }
  }
  return;
}
