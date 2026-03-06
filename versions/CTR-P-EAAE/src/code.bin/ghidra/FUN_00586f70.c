/**
 * FUN_00586f70.c
 * Source line: 832855
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00586f70(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x1b);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0x19);
  }
  if ((bVar3 && cVar1 == '\0') && (iVar2 = FUN_00585474(), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x19) = 1;
    FUN_005833e4();
    return;
  }
  return;
}
