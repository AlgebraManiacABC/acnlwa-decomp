/**
 * FUN_0038f5d0.c
 * Source line: 497798
 * Body lines: 12
 */
#include "../../../include/types.h"

bool FUN_0038f5d0(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_003d2238();
  if ((iVar1 != 0) && (iVar1 = FUN_003d2238(), iVar1 != -0xd4)) {
    iVar1 = FUN_003d2238();
    bVar2 = *(int *)(iVar1 + 0xec) != 0;
    if (bVar2) {
      *(undefined4 *)(iVar1 + 0xec) = 0;
    }
    return bVar2;
  }
  return false;
}
