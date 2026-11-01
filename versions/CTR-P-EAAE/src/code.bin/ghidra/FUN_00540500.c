#include "../../../include/types.h"

void FUN_00540500(undefined4 param_1,int *param_2)

{
  if (*param_2 != 0) {
    *(undefined4 *)(*param_2 + 0xcc) = param_1;
    return;
  }
  return;
}
