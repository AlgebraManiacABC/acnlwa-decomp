/**
 * FUN_005aaa70.c
 * Source line: 857308
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_005aaa70(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = FUN_00123590(uRam0097e0a8,0xf0000001);
    uVar2 = -(iVar1 >> 0x1f) ^ 1;
    *(char *)(param_1 + 8) = (char)uVar2;
    if ((uVar2 == 0) && (-(iVar1 >> 0x1f) != 0)) {
      FUN_0012f598(iVar1,0x5aaab0);
    }
    iVar1 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
