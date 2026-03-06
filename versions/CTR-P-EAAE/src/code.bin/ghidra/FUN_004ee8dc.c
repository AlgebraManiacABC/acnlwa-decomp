/**
 * FUN_004ee8dc.c
 * Source line: 736559
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004ee8dc(int *param_1)

{
  int iVar1;
  undefined8 in_d0;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  *(int *)(iVar1 + 0x44) = (int)in_d0;
  *(int *)(iVar1 + 0x48) = (int)((ulonglong)in_d0 >> 0x20);
  return;
}
