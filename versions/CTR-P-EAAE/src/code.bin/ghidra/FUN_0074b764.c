#include "../../../include/types.h"

undefined4 FUN_0074b764(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0074a0dc();
  if ((iVar1 == 0) || (*(char *)(param_1 + 8) != '\x02')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
