#include "../../../include/types.h"

void FUN_0020ae0c(int *param_1,int param_2)

{
  if (*(char *)((int)param_1 + 0x39) != param_2) {
    *(char *)((int)param_1 + 0x39) = (char)param_2;
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}
