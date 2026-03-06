/**
 * FUN_005894fc.c
 * Source line: 834320
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_005894fc(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  cVar1 = *param_1;
  iVar3 = FUN_002fb378();
  cVar2 = *(char *)(iVar3 + 9);
  *param_1 = cVar2;
  return cVar2 != cVar1;
}
