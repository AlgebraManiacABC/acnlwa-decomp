#include "../../../include/types.h"

void FUN_0080ef60(undefined4 *param_1)

{
  param_1[1] = param_1 + 3;
  param_1[2] = 0x20;
  *(undefined1 *)(param_1[1] + 0x1f) = 0;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = &UNK_00903a40;
  return;
}
