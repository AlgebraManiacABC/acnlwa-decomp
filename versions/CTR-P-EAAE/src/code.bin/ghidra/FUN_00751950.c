#include "../../../include/types.h"

byte FUN_00751950(int param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x5f0) == 0) {
    bVar1 = 0x9b;
  }
  else {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x5f0) + 10);
    if (0x9a < bVar1) {
      bVar1 = 0;
    }
  }
  return bVar1;
}
