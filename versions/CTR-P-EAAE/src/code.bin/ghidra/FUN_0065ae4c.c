/**
 * FUN_0065ae4c.c
 * Source line: 967955
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0065ae4c(int param_1)

{
  short sVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    sVar1 = *(short *)(param_1 + 0x8ca);
    FUN_006547e4(param_1,(int)sVar1,(int)*(char *)(param_1 + 0x8cc),0x1000,0x100);
    if ((int)*(short *)(param_1 + 0x2e) == (int)sVar1) {
      if (*(char *)(param_1 + 0x8cd) != '\0') {
        FUN_0064d0b8(param_1,0x13,0);
        return;
      }
      FUN_0064d0b8(param_1,0xf,0);
      return;
    }
  }
  return;
}
