/**
 * FUN_0028d378.c
 * Source line: 332985
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0028d378(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x13c) == '\0' || *(char *)(param_1 + 0x13c) == '\x02') {
    *(short *)(param_1 + 0x138) = *(short *)(param_1 + 0x138) + 1;
  }
  if (((*(uint *)(param_1 + 0x128) < *(uint *)(param_1 + 0x134)) &&
      (iVar1 = FUN_00305f44(), iVar1 == param_2)) && (_DAT_0095c71c != 0)) {
    FUN_001b7ce8(_DAT_0095c71c,param_2,1,&DAT_0095bfdc);
  }
  OnUnresolved(*(undefined4 *)(param_1 + 0x124),param_2);
  return;
}
