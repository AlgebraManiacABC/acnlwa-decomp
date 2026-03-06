/**
 * FUN_005522d0.c
 * Source line: 795718
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005522d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iRam0097e744 = FUN_00131280(0x200,param_1,4);
  iVar2 = 0;
  do {
    fVar3 = (float)__hardfp_cosf((float)(longlong)iVar2 * 0.0078125 * 2.0 * 3.14159);
    iVar1 = iVar2 * 4;
    iVar2 += 1;
    *(float *)(iRam0097e744 + iVar1) = fVar3 * 0.5 + 0.5;
  } while (iVar2 < 0x80);
  return;
}
