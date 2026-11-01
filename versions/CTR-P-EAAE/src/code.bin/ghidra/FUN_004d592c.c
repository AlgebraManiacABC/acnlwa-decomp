#include "../../../include/types.h"

void FUN_004d592c(float param_1,float *param_2)

{
  if (param_1 < *param_2) {
    (*(code *)(&PTR_LAB_008a2990)[*(byte *)(param_2 + 2)])();
    return;
  }
  if (param_2[1] <= param_1) {
    (*(code *)(&PTR_LAB_008a299c)[*(byte *)((int)param_2 + 9)])();
    return;
  }
  return;
}
