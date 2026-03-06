/**
 * FUN_006e4568.c
 * Source line: 1042111
 * Body lines: 14
 */
#include "../../../include/types.h"

int * FUN_006e4568(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = iRam009ab580;
  while( true ) {
    if (iVar2 == 0) {
      return NULL;
    }
    piVar3 = *(int **)(iVar2 + 0x10);
    if ((piVar3[0x15] != param_1) &&
       (iVar1 = (**(code **)(*piVar3 + 100))(piVar3,param_1), iVar1 != 0)) break;
    iVar2 = *(int *)(iVar2 + 8);
  }
  return piVar3;
}
