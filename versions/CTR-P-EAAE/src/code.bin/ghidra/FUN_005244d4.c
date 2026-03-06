/**
 * FUN_005244d4.c
 * Source line: 767024
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_005244d4(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 10);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 9);
  }
  if ((bVar3 && cVar1 == '\0') &&
     (iVar2 = (**(code **)(**(int **)(iRam0095c728 + 0x10) + 0xc))
                        (*(int **)(iRam0095c728 + 0x10),param_1,1), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return (int)*(char *)(param_1 + 10);
}
