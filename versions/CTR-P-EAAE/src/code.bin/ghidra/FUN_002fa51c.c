/**
 * FUN_002fa51c.c
 * Source line: 393157
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002fa51c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_0095deac + 0x14);
  if ((iVar1 != 0) && (iVar2 = FUN_0075ad10(), iVar2 != 0)) {
    if ((*(uint *)(param_1 + 0xe8) < 5) &&
       (iVar2 = *(int *)(param_1 + 0xd4 + (*(uint *)(param_1 + 0xe8) % 5) * 4), 0 < iVar2)) {
      FUN_0060351c(iVar1,iVar2,0,0,3);
      *(int *)(param_1 + 0xcc) = iVar2;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    }
  }
  return;
}
