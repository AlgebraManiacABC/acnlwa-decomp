/**
 * FUN_002fdf10.c
 * Source line: 396209
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_002fdf10(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00305f2c();
  iVar1 = iRam009524dc;
  if (iVar2 != 3) {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (*(byte *)(iVar1 + 0x1b) == param_1) {
        return 1;
      }
    }
  }
  return 0;
}
