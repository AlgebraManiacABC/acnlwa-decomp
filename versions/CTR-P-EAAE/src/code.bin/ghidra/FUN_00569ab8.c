/**
 * FUN_00569ab8.c
 * Source line: 811241
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_00569ab8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[1] = param_1 + 3;
  param_1[2] = 0;
  *param_1 = &UNK_00906224;
  puVar1 = (undefined4 *)FUN_0012b394(param_1 + 3);
  *puVar1 = &UNK_009061c8;
  puVar1[0x4f] = 0x2010000;
  puVar1 = (undefined4 *)FUN_00125e08(puVar1 + 0x50);
  *puVar1 = &UNK_0090614c;
  return puVar1 + -0x53;
}
