#include "../../../include/types.h"

undefined4 FUN_007335a4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xd8a148f8;
  }
  return uVar1;
}
