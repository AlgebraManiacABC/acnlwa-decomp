#include "../../../include/types.h"

float FUN_00827028(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int **)(param_1 + 0x3c) != NULL) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x24))();
  }
  return *(float *)(param_1 + 0x54) + (float)(longlong)iVar1 * *(float *)(param_1 + 0x28);
}
