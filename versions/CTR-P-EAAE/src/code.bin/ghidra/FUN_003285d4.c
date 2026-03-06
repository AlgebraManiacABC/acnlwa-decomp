/**
 * FUN_003285d4.c
 * Source line: 428713
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_003285d4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0();
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 600,param_1 + 0x2188);
    FUN_0081a384(param_1 + 0x213c,&DAT_00328668,0);
    return;
  }
  FUN_00569544(param_1 + 0x2188);
  *(undefined1 *)(param_1 + 0x37a) = 1;
  return;
}
