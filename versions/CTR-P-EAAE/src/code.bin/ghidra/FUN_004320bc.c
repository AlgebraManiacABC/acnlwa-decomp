#include "../../../include/types.h"

uint FUN_004320bc(int *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}
