/**
 * FUN_006d32d4.c
 * Source line: 1032856
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_006d32d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(DAT_0094fd3c + 0x1e4) != 0) &&
     (iVar1 = switchD_004d0e54::caseD_42(*(int *)(DAT_0094fd3c + 0x1e4),param_1,param_2), uVar2 = 0,
     iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
