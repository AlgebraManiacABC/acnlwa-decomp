#include "../../../include/types.h"

void FUN_00778e6c(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + iVar1 + 4) = 0;
  if (*(int *)((int)param_1 + iVar1 + 0xc) != 0) {
    FUN_004f1270((int)param_1 + iVar1 + 8);
  }
  return;
}
