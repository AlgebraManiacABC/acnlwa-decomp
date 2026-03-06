/**
 * FUN_00180174.c
 * Source line: 197614
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00180174(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_002fe574(param_1,0x94d974);
  if (((iVar1 != 0) && (iVar1 = FUN_00768174(param_1), iVar1 == 0)) &&
     (cRam0094d944 == '\0' || param_2 == 2)) {
    return 0;
  }
  return 1;
}
