#include "../../../include/types.h"

void FUN_002bed24(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_002ff8b0(4);
  if (uVar1 < 4) {
    *(undefined1 *)((int)&DAT_0017be0c + param_1 + uVar1) = 1;
  }
  return;
}
