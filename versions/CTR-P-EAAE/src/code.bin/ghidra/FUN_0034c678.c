/**
 * FUN_0034c678.c
 * Source line: 448992
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0034c678(int *param_1,cro_file *cro)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0034ca80();
  uVar1 = cro->data_size;
  uVar2 = cro->bss_size;
  *param_1 = (int)(cro->hash[0].field0_0x0 + (*param_1 + 0xfffU & 0xfffff000));
  param_1[1] = (int)(cro->hash[0].field0_0x0 + (param_1[1] + 0xfffU & 0xfffff000));
  param_1[2] = (int)(cro->hash[0].field0_0x0 + (param_1[2] + 0xfffU & 0xfffff000));
  param_1[3] = (int)(cro->hash[0].field0_0x0 + (param_1[3] + 0xfffU & 0xfffff000));
  param_1[4] = (uVar1 + 7 & 0xfffffff8) + uVar2;
  return 0;
}
