/**
 * FUN_0038f588.c
 * Source line: 497778
 * Body lines: 12
 */
#include "../../../include/types.h"

bool FUN_0038f588(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_003d2238();
  if ((iVar1 != 0) && (iVar1 = FUN_003d2238(), iVar1 != -0xd4)) {
    iVar1 = FUN_003d2238();
    bVar2 = *(int *)(iVar1 + 0xec) == 0;
    if (bVar2) {
      *(undefined4 *)(iVar1 + 0xec) = param_2;
    }
    return bVar2;
  }
  return false;
}
