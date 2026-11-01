#include "../../../include/types.h"

void FUN_00584fe0(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) == '\x12') {
    piVar1 = *(int **)(param_1 + 8);
    *(undefined1 *)((int)piVar1 + 0x2a) = 1;
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}
