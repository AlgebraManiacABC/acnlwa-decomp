/**
 * FUN_003547b0.c
 * Source line: 455812
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_003547b0(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  bVar2 = param_2 <= (uint)(*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x18));
  if (bVar2) {
    *(uint *)(iVar1 + 0x10) = param_2;
  }
  return bVar2;
}
