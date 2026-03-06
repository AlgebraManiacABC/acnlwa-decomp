/**
 * FUN_002e3854.c
 * Source line: 379565
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002e3854(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008f369c;
  FUN_00569774(param_1 + 0xa0,0);
  iVar1 = FUN_0056988c(param_1 + 0xa0);
  iVar1 = thunk_FUN_00569480(iVar1 + -0x14c);
  *(undefined **)(iVar1 + -0x134) = &DAT_008ed374;
  FUN_00569774(iVar1 + -0x54,0);
  iVar1 = FUN_0056988c(iVar1 + -0x54);
  FUN_002b6ef8(iVar1 + -0xe0);
  return;
}
