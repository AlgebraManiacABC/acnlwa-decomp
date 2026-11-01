#include "../../../include/types.h"

void FUN_00360400(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = thunk_FUN_003619b0(0x9c);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_003d47bc(iVar1,param_1,param_2);
    *puVar2 = &UNK_008fbbc0;
    puVar2[0x26] = 0;
    puVar2[0x24] = 0;
    puVar2[0x25] = 0;
  }
  return;
}
