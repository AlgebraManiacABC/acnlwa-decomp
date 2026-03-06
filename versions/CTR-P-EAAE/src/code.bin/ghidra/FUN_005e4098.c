/**
 * FUN_005e4098.c
 * Source line: 894071
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005e4098(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  cVar1 = *(char *)(*(int *)(*param_1 + 4) + 4);
  bVar2 = FUN_0075ad18(*(undefined4 *)(*(int *)(*param_1 + 4) + 0x360));
  if (((bVar2 & cVar1 == '\0') != 0) &&
     (iVar3 = *(int *)(*(int *)(*param_1 + 4) + 900), *(char *)(iVar3 + 0x1a) == '\0')) {
    if (*(char *)(iVar3 + 4) != '\0') {
      FUN_00583024();
      *(undefined1 *)(iVar3 + 4) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}
