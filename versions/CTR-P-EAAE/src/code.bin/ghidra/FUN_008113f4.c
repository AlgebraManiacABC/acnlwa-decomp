#include "../../../include/types.h"

undefined4 * FUN_008113f4(undefined4 *param_1)

{
  *param_1 = &UNK_00904c74;
  if ((int *)param_1[1] != NULL) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}
