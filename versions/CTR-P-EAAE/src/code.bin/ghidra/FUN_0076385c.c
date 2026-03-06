/**
 * FUN_0076385c.c
 * Source line: 1122430
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_0076385c(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = FUN_001c4384();
  piVar2 = (int *)(iVar1 + 0xecd0);
  if (((*(int **)(param_1 + 0x348) == piVar2) &&
      (uVar3 = *(uint *)(param_1 + 0x34c), uVar3 < *(uint *)(iVar1 + 0xecd4))) &&
     (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,uVar3), iVar1 != 0)) {
    piVar2 = piVar2 + uVar3 * 0x22a + 3;
  }
  else {
    piVar2 = NULL;
  }
  return (char)piVar2[400] == '\0';
}
