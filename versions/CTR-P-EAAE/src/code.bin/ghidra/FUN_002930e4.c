/**
 * FUN_002930e4.c
 * Source line: 336346
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002930e4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    FUN_00568984(param_1 + 0x6c,param_1 + 0x59c,*(undefined4 *)(param_1 + 0x6f0),0);
    uRam0095070a = 0;
    *(byte *)(*(int *)(param_1 + 0x6e0) + 0xb7) = *(byte *)(*(int *)(param_1 + 0x6e0) + 0xb7) & 0xfe
    ;
    *(undefined4 *)(param_1 + 0xac8) = 0;
    FUN_0081831c(param_1 + 0x14,&UNK_00291608,0);
    return;
  }
  FUN_00569544(param_1 + 0x59c);
  *(undefined1 *)(param_1 + 0x18e) = 1;
  return;
}
