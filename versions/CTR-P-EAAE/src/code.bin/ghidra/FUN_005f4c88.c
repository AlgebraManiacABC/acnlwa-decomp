/**
 * FUN_005f4c88.c
 * Source line: 906063
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005f4c88(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_009097f4;
  iVar1 = iRam0095dec4;
  if (param_1 == puRam0095dec8) {
    puRam0095dec8 = NULL;
    if (*(int *)(iRam0095dec4 + 0x1b8) != 0) {
      FUN_002ffb64();
    }
    iVar1 = FUN_00137e8c(iVar1 + 0x19c);
    FUN_001327fc(iVar1 + -0x188);
    iRam0095dec4 = 0;
  }
  FUN_0013efb4(param_1);
  return;
}
