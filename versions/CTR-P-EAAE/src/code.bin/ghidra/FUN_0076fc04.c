/**
 * FUN_0076fc04.c
 * Source line: 1132818
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0076fc04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xae8) != -1) &&
     (iVar1 = FUN_00768248(param_1 + *(int *)(param_1 + 0xae8) * 4 + 0x40cc), iVar1 != 0xb2)) {
    uVar2 = FUN_0076c318(param_1 + *(int *)(param_1 + 0xae8) * 4 + 0x40cc);
    return uVar2;
  }
  return 1;
}
