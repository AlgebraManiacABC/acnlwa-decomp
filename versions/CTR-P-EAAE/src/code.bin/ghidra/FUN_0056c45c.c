/**
 * FUN_0056c45c.c
 * Source line: 813548
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0056c45c(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0095bf80 != '\0') {
    GET_DAT_0095bf74();
    return;
  }
  iVar1 = FUN_002fb338(&DAT_0095c508);
  if (iVar1 == 0) {
    FUN_005cddb4(&DAT_0095c508,0xad56b0);
    FUN_00314cec(&DAT_0095c508);
  }
  FUN_002fb430(param_1,&DAT_0095c508);
  return;
}
