#include "../../../include/types.h"

undefined4 FUN_001bfc88(int *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)((int)param_1 + 0x275)) {
  case 0:
    uVar1 = (**(code **)(*param_1 + 0x19c))();
    return uVar1;
  case 1:
    uVar1 = (**(code **)(*param_1 + 0x1c4))();
    return uVar1;
  case 2:
    uVar1 = (**(code **)(*param_1 + 0x1ec))();
    return uVar1;
  default:
    return 0;
  }
}
