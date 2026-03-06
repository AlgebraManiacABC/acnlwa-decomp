/**
 * FUN_0058719c.c
 * Source line: 832936
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0058719c(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x1b);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)((int)param_1 + 0x19);
  }
  if (((bVar3 && cVar1 == '\0') && (iVar2 = FUN_00585474(), iVar2 != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 4))(param_1), iVar2 != 0)) {
    *(undefined1 *)((int)param_1 + 0x19) = 1;
  }
  return;
}
