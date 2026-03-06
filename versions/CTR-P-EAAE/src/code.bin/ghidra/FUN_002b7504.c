/**
 * FUN_002b7504.c
 * Source line: 354531
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002b7504(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3e4);
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x270,param_1 + 0x3e4);
    FUN_00818b78(param_1,&UNK_002b7590,0);
    return;
  }
  FUN_00569544(param_1 + 0x3e4);
  *(undefined1 *)(param_1 + 0x392) = 1;
  return;
}
