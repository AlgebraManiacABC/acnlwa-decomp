/**
 * FUN_0010afe8.c
 * Source line: 109292
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0010afe8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0030403c(param_1 + 0x1dd4,param_1 + 0x9a8,0);
  if (iVar1 != 0) {
    uVar2 = FUN_003040cc(param_1);
    return uVar2;
  }
  return 3;
}
