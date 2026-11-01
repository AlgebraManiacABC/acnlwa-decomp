#include "../../../include/types.h"

void FUN_00569280(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_2 + 0x1c) = 1;
  (**(code **)(**(int **)(param_2 + 0x18) + 0x18))(*(int **)(param_2 + 0x18),param_3,param_4,0);
  return;
}
