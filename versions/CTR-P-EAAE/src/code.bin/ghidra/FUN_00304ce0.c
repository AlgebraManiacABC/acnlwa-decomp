/**
 * FUN_00304ce0.c
 * Source line: 401744
 * Body lines: 9
 */
#include "../../../include/types.h"

int * FUN_00304ce0(int *param_1)

{
  int iVar1;
  
  if ((*param_1 != 0) && (iVar1 = FUN_004dbc3c(), iVar1 == 0)) {
    iRam00ad5638 = *param_1;
    if (*(undefined4 **)(iRam00ad5638 + 4) != NULL) {
      **(undefined4 **)(iRam00ad5638 + 4) = 0;
    }
    *(undefined4 *)(iRam00ad5638 + 4) = 0xad5638;
  }
  return param_1;
}
