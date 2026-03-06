/**
 * FUN_006860a0.c
 * Source line: 989643
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006860a0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_1c [12];
  
  FUN_00759a54(auStack_1c,param_1 + 0x8ca);
  bVar1 = *(byte *)(param_1 + 0x8ce);
  FUN_00650714(param_1,auStack_1c);
  FUN_00651a68(param_1,(uint)bVar1 << 8);
  iVar2 = FUN_0070acf8(param_1 + 0x1b4,0);
  if ((iVar2 == 0) && (iVar2 = FUN_0070ab24(param_1 + 0x1b4,0), iVar2 != 0)) {
    if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
      *(undefined1 *)(param_1 + 0x8cf) = 1;
    }
    FUN_0068db1c(0,0x3f800000,0x40800000,0x40800000,0x40800000,param_1,0x19,1,0,1);
  }
  return;
}
