/**
 * FUN_00586078.c
 * Source line: 832256
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00586078(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x1b);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)((int)param_1 + 0x19);
  }
  if ((bVar3 && cVar1 == '\0') && (iVar2 = FUN_00585474(), iVar2 != 0)) {
    *(undefined1 *)((int)param_1 + 0x19) = 1;
          // WARNING: Could not recover jumptable at 0x005860b8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 4))(param_1);
    return;
  }
  return;
}
