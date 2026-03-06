/**
 * FUN_00730910.c
 * Source line: 1087251
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00730910(int param_1)

{
  uint uVar1;
  int iVar2;
  uint local_38 [10];
  
  uVar1 = FUN_004680e0(local_38);
  if ((uVar1 & 0x80000000) == 0) {
    iVar2 = (local_38[0] & 0xffff0000) + (local_38[0] & 0xffff);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x48);
  }
  return iVar2;
}
