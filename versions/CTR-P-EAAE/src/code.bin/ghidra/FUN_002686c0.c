#include "../../../include/types.h"

void FUN_002686c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  *(undefined4 *)(iVar1 + 0xcc) = param_2;
  *(undefined1 *)(iVar1 + 0xda) = 1;
  return;
}
