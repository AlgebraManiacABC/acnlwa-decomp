/**
 * FUN_001c1e54.c
 * Source line: 228762
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_001c1e54(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined *local_10;
  char *local_c;
  
  if (*(int *)(param_1 + 0x1bc) == 0) {
    local_c = "Bg/Data/idr_jmp.bin";
    local_10 = &DAT_009047f8;
    iVar1 = FUN_0056aa98(param_1 + 0xec,&local_10,param_2,4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
