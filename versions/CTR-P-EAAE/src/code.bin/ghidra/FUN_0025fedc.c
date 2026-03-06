/**
 * FUN_0025fedc.c
 * Source line: 308405
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0025fedc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b4fc0(param_1 + 0x294,"G_inout_00",1);
  FUN_00568630(param_1 + 0x294,param_1 + 0x3e0,uVar1,0);
  FUN_005697e0(0,param_1 + 0x3e0);
  FUN_0025f68c(param_1,0);
  if (*(char *)(param_1 + 0x24) == 'm') {
    FUN_0025f970(param_1);
  }
  else {
    FUN_0025fadc();
  }
  FUN_0058d3b4(0,0x1000461);
  return;
}
