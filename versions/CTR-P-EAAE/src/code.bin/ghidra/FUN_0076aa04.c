/**
 * FUN_0076aa04.c
 * Source line: 1128129
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0076aa04(ushort *param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  if (((param_1[1] & 0x3fff) == (param_2[1] & 0x3fff)) &&
     ((*param_1 & 0x7fff) == (*param_2 & 0x7fff))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
