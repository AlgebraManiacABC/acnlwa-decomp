/**
 * FUN_0060335c.c
 * Source line: 919079
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0060335c(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if ((*(char *)(param_1 + 8) != '\0') &&
     (iVar2 = FUN_0075ad18(*(undefined4 *)(param_1 + 0x360)), iVar2 == 0)) {
    cVar1 = *(char *)(param_1 + 5);
    bVar3 = cVar1 == '\t';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 4);
    }
    if (bVar3 && cVar1 == '\a') {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}
