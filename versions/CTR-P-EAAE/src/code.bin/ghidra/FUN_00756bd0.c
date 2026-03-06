/**
 * FUN_00756bd0.c
 * Source line: 1112299
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00756bd0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (((uVar2 & 0xff) < 3) && (*(byte *)((uVar2 & 0xff) + param_1 + 0x56) < 10)) {
      iVar1 += 1;
    }
    uVar2 += 1;
  } while ((int)uVar2 < 3);
  return iVar1;
}
