/**
 * FUN_006cf624.c
 * Source line: 1030283
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_006cf624(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    uVar2 = FUN_00745f80(param_1 + 0xc);
    FUN_0014e910(param_2,uVar2);
  }
  return cVar1 != '\0';
}
