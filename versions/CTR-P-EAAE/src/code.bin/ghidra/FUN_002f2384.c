#include "../../../include/types.h"

undefined4 FUN_002f2384(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x294,1);
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x458,1);
  switchD_000b7c78::caseD_9(param_1 + 0x1d90);
  return 2;
}
