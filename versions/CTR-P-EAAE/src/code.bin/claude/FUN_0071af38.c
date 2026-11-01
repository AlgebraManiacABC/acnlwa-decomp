#include "../../../include/types.h"

undefined4 FUN_0071af38(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x104) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x104) + 200);
  }
  return uVar1;
}
