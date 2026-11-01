#include "../../../include/types.h"

int FUN_00426950(int param_1,int param_2)

{
  if (param_1 != param_2) {
    FUN_00426664(param_1 + 4,param_2 + 4);
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  }
  return param_1;
}
