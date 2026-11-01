#include "../../../include/types.h"

undefined4 FUN_0013c700(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 4);
  }
  return uVar1;
}
