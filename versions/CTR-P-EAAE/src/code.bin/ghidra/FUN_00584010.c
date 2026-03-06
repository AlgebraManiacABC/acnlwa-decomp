/**
 * FUN_00584010.c
 * Source line: 830745
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00584010(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = *(char *)((int)param_1 + 7) != '\0';
  cVar1 = '\0';
  if (bVar2) {
    cVar1 = (char)param_1[2];
  }
  if (!bVar2 || cVar1 == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x30))(param_1);
          // WARNING: Subroutine does not return
  FUN_00584074();
}
