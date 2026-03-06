/**
 * FUN_00589458.c
 * Source line: 834262
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_00589458(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  cVar1 = *param_1;
  iVar3 = FUN_002fb378();
  cVar2 = *(char *)(iVar3 + 7);
  *param_1 = cVar2;
  return cVar2 != cVar1;
}
