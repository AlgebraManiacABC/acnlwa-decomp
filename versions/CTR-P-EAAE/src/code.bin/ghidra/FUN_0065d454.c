/**
 * FUN_0065d454.c
 * Source line: 969078
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0065d454(int param_1,int param_2)

{
  int iVar1;
  
  if (((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) &&
     (iVar1 = FUN_0065e098(param_2), iVar1 == 0)) {
    FUN_00316f9c(param_1,0x29);
  }
  *(byte *)(param_1 + 0x175) = *(byte *)(param_1 + 0x175) & 0xfe;
  FUN_002e6368(param_1 + 0xc34);
  if (param_2 != 0x6e) {
    FUN_0064f368(param_1);
  }
  return;
}
