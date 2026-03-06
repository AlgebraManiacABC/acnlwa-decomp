/**
 * FUN_001c1eb8.c
 * Source line: 228784
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_001c1eb8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined *local_10;
  char *local_c;
  
  uVar1 = 1;
  if (_DAT_00952c4c != 0) {
    local_c = "Bg/Data/grd_jmp.bin";
    local_10 = &DAT_009047f8;
    uVar1 = FUN_0056a974(param_1,&local_10,_DAT_00952c4c,4);
  }
  return uVar1;
}
