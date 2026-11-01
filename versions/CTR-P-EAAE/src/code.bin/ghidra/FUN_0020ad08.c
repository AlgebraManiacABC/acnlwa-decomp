#include "../../../include/types.h"

void FUN_0020ad08(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GET_BYTE_00957322();
  if (iVar1 == 0x5e) {
    param_2 = 0;
  }
  if (*(char *)((int)param_1 + 0x35) != param_2) {
    *(char *)((int)param_1 + 0x35) = (char)param_2;
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}
