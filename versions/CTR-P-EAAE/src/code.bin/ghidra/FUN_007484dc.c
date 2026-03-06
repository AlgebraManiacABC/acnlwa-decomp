/**
 * FUN_007484dc.c
 * Source line: 1104387
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_007484dc(ItemParam_t *param_1)

{
  byte param_0x11;
  
  param_0x11 = param_1->field14_0x11;
  if ((param_0x11 < 0x56) &&
     ((((param_0x11 == 0xb || param_0x11 == 0xc || (param_0x11 == 0xd || param_0x11 == 0xe)) ||
       (param_0x11 == 0xf || param_0x11 == 0x10)) ||
      ((param_0x11 == 0x11 || param_0x11 == 0x13 || (param_0x11 == 0x14 || param_0x11 == 0x15))))))
  {
    return 1;
  }
  return 0;
}
