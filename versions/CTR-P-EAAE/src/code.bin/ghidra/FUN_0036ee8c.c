#include "../../../include/types.h"

void FUN_0036ee8c(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 8))(param_1);
  cVar1 = (char)param_1[0xb];
  while (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x10))(param_1);
    cVar1 = (char)param_1[0xb];
  }
  (**(code **)(*param_1 + 0xc))(param_1);
  return;
}
