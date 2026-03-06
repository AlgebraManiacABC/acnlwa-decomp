/**
 * FUN_00293168.c
 * Source line: 336368
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00293168(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x1b8,param_1 + 0x5c4);
    uRam0095070a = 0;
    *(byte *)(*(int *)(param_1 + 0x6e4) + 0xb7) = *(byte *)(*(int *)(param_1 + 0x6e4) + 0xb7) & 0xfe
    ;
    FUN_0081831c(param_1 + 0x14,&UNK_00291608,0);
    return;
  }
  FUN_00569544(param_1 + 0x5c4);
  *(undefined1 *)(param_1 + 0x2da) = 1;
  return;
}
