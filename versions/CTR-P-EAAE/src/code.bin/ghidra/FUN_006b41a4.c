/**
 * FUN_006b41a4.c
 * Source line: 1011353
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_006b41a4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc0c) != 0) {
    cVar1 = FUN_004bfd70(*(int *)(param_1 + 0xc0c) + 4);
    *(char *)(param_1 + 0xcf4) = cVar1;
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
