/**
 * FUN_00319068.c
 * Source line: 419512
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00319068(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    DAT_0094fd58 &= 0xffffffef;
    FUN_00569420(param_1 + 0x310,param_1 + 0x20b0);
    FUN_005204b0(param_1);
    FUN_00819d38(param_1 + 0xa4,&UNK_003189b4,0);
    return;
  }
  FUN_00569544(param_1 + 0x20b0);
  *(undefined1 *)(param_1 + 0x432) = 1;
  return;
}
