#include "../../../include/types.h"

bool FUN_004d80d8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00744310();
  if (iVar1 != 0xffff) {
    *(short *)(*(int *)(param_1 + 8) + 2) = (short)iVar1;
  }
  return iVar1 != 0xffff;
}
