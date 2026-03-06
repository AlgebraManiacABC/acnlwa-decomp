/**
 * FUN_007177e0.c
 * Source line: 1071137
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_007177e0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if ((3 < uVar2) || (*(char *)(param_1 + uVar2 + 0x10) != '\0')) {
      iVar1 += 1;
    }
    uVar2 += 1;
  } while ((int)uVar2 < 4);
  return iVar1;
}
