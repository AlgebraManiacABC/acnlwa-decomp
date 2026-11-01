#include "../../../include/types.h"

void FUN_0044bbdc(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 100) == 0) {
    cVar1 = FUN_00440130(*(undefined4 *)(param_1 + 0xc));
  }
  else {
    cVar1 = FUN_00440314();
  }
  if (cVar1 != '\x05') {
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),0);
    return;
  }
  return;
}
