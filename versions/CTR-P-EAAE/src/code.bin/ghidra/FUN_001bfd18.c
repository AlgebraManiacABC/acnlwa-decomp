#include "../../../include/types.h"

undefined4 FUN_001bfd18(int *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)((int)param_1 + 0x275)) {
  case 0:
    uVar1 = (**(code **)(*param_1 + 0x1a4))();
    return uVar1;
  case 1:
    uVar1 = (**(code **)(*param_1 + 0x1cc))();
    return uVar1;
  case 2:
    uVar1 = (**(code **)(*param_1 + 500))();
    return uVar1;
  default:
    return 0;
  }
}
