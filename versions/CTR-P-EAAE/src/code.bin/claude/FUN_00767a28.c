/**
 * FUN_00767a28.c
 * Source line: 1125465
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_00767a28(byte *param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 == param_2) {
    param_1 = (byte *)(uint)param_1[1];
  }
  return bVar1 == param_2 && param_1 == param_3;
}
