/**
 * FUN_005f1138.c
 * Source line: 903030
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_005f1138(undefined1 *param_1,undefined1 param_2)

{
  astruct *paVar1;
  undefined4 *puVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  paVar1 = astruct_Init((astruct *)(param_1 + 4));
  paVar1->field_0xd = 0;
  __rt_memclr_w(paVar1 + 1,0xeb);
  puVar2 = (undefined4 *)FUN_0012ca7c(paVar1 + 1);
  *puVar2 = &UNK_009097a0;
  *(undefined1 *)((int)puVar2 + 0xeb) = 0;
  return puVar2 + -5;
}
