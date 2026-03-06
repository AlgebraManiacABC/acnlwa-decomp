/**
 * FUN_002ed760.c
 * Source line: 385203
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002ed760(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xcfc) != *(int *)(param_1 + 0xcf8)) {
    FUN_0030f48c(&DAT_00af76f8,"%s_%02d","N_slct_cntnt",*(int *)(param_1 + 0xcf8));
    (**(code **)(_DAT_00af76f8 + 8))(&DAT_00af76f8);
    iVar1 = FUN_0056878c(param_1 + 0x270,uRam00af76fc);
    iVar2 = *(int *)(param_1 + 0x3c0);
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
    *(byte *)(iVar2 + 0xb7) = *(byte *)(iVar2 + 0xb7) & 0xcf;
    *(undefined4 *)(param_1 + 0xcfc) = *(undefined4 *)(param_1 + 0xcf8);
  }
  return;
}
