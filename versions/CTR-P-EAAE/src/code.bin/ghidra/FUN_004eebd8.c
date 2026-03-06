/**
 * FUN_004eebd8.c
 * Source line: 736804
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 * FUN_004eebd8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004ee4ec();
  puVar1[2] = 0xffffffff;
  *puVar1 = &UNK_009029c4;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return puVar1;
}
