#include "../../../include/types.h"

void FUN_002c2974(Item_t *param_1,int *param_2)

{
  if ((int *)*param_2 != NULL) {
    (**(code **)(*(int *)*param_2 + 0x44))();
    return;
  }
  Item_Set(param_1,0x7ffe);
  return;
}
