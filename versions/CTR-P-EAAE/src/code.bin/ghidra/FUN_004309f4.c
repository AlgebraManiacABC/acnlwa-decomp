/**
 * FUN_004309f4.c
 * Source line: 597166
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004309f4(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x1c))(param_1);
  if ((char *)param_1[0x10] != NULL) {
    cVar1 = *(char *)param_1[0x10];
    if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
      FUN_004261f4();
    }
    param_1[0x10] = 0;
  }
  return;
}
