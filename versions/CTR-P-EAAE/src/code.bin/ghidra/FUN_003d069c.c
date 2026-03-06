/**
 * FUN_003d069c.c
 * Source line: 542274
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_003d069c(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(char *)(param_1 + 0x2c) = (char)param_2;
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  if ((puVar1 != NULL) && (iVar2 = (**(code **)*puVar1)(puVar1,param_2 == 0), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 4) = 0;
    return 1;
  }
  return 0;
}
