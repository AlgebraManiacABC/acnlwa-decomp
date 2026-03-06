/**
 * FUN_006cbb94.c
 * Source line: 1028445
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_006cbb94(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 < 2) || (param_1 == 2 || param_1 == 3)) {
    uVar1 = FUN_002ff8b0(4);
    iVar2 = FUN_0027ab40();
    if ((iVar2 != 0) && (param_1 == uVar1)) {
      return 1;
    }
  }
  return 0;
}
