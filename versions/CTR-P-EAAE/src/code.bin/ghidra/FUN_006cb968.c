/**
 * FUN_006cb968.c
 * Source line: 1028331
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006cb968(float *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  FUN_006a6dbc();
  if (((param_4 < 0xfc) && (iVar1 = FUN_005ca27c(param_4), iVar1 == 0xf)) &&
     (((param_4 == 0x90 ||
       (((param_4 == 0x98 || param_4 == 0xa0 || (param_4 == 0x94 || param_4 == 0xa4)) ||
        (param_4 == 0x9c || param_4 == 0x93)))) ||
      ((param_4 == 0x9b || param_4 == 0xa3 ||
       ((param_4 == 0x97 || param_4 == 0xa7) || param_4 == 0x9f)))))) {
    *param_1 = *param_1 + 16.0;
    param_1[2] = param_1[2] - 16.0;
  }
  return;
}
