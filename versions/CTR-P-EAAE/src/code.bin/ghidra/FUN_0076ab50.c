/**
 * FUN_0076ab50.c
 * Source line: 1128226
 * Body lines: 10
 */
#include "../../../include/types.h"

float FUN_0076ab50(void)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_00535a1c();
  if (iVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)(*(byte *)(iVar1 + 4) >> 4);
  }
  return fVar2;
}
