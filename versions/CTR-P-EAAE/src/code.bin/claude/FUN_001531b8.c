#include "../../../include/types.h"

undefined4 FUN_001531b8(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1 < 100) && (iVar1 = FUN_0016c578(param_1,1), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
