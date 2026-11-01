#include "../../../include/types.h"

bool FUN_005b060c(int param_1,int param_2)

{
  if (param_2 < 9999) {
    *(short *)(param_1 + 2) = (short)param_2;
  }
  return param_2 < 9999;
}
