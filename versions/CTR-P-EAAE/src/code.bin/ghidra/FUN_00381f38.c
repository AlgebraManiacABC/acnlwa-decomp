#include "../../../include/types.h"

bool FUN_00381f38(int param_1,uint param_2)

{
  if (param_2 < 0x65) {
    *(char *)(param_1 + 0x5c) = (char)param_2;
  }
  return param_2 < 0x65;
}
