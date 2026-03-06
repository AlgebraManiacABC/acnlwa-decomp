/**
 * FUN_00131af8.c
 * Source line: 138268
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00131af8(int param_1)

{
  int iVar1;
  
  nn::os::ThreadLocalStorage::GetValue((ThreadLocalStorage *)(iRam009753d0 + 0x40));
  iVar1 = *(int *)(param_1 + 0x28) + -1;
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN_00137e84(param_1 + 8);
    return;
  }
  return;
}
