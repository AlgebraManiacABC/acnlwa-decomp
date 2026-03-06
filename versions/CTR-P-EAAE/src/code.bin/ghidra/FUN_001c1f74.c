/**
 * FUN_001c1f74.c
 * Source line: 228820
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_001c1f74(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined *local_10;
  char *local_c;
  
  uVar1 = 1;
  if (param_2 != 0) {
    local_c = "Bg/Data/idr_jmp.bin";
    local_10 = &DAT_009047f8;
    uVar1 = FUN_0056a758(param_1 + 0xec,&local_10,param_2,4);
  }
  return uVar1;
}
