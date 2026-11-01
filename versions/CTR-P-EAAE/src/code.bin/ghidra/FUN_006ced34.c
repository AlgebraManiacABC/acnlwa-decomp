#include "../../../include/types.h"

void FUN_006ced34(undefined4 *param_1)

{
  *param_1 = &UNK_0090b0e8;
  if (param_1 == puRam0094e4bc) {
    puRam0094e4bc = NULL;
    (**(code **)*_DAT_0094e4b8)();
    _DAT_0094e4b8 = NULL;
  }
  FUN_0013efb4(param_1);
  return;
}
