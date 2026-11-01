#include "../../../include/types.h"

void FUN_0071aa1c(Item_t *param_1,int *param_2)

{
  if ((int *)*param_2 != NULL) {
    (**(code **)(*(int *)*param_2 + 0xa4))();
    return;
  }
  Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
  return;
}
