#include "../../../include/types.h"

undefined4 FUN_004eec54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_004f2450(param_1,param_3,param_4);
  uVar1 = FUN_004f1028(param_2);
  (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),uVar1);
  return 1;
}
