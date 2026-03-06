/**
 * FUN_004409d4.c
 * Source line: 606532
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 * FUN_004409d4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &UNK_00900a3c;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  puVar1 = (undefined4 *)FUN_00427938(param_1 + 2,1,param_1 + 6,0x20);
  *puVar1 = &UNK_0090053c;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return puVar1 + -2;
}
