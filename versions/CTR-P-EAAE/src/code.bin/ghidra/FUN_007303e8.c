/**
 * FUN_007303e8.c
 * Source line: 1087014
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_007303e8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0xfe) {
    return (uint)*(ushort *)(param_1 + 0x44);
  }
  if ((param_2 != 0) && (param_2 < 0xd)) {
    iVar1 = FUN_0072f1d8(iRam00974a58);
    if (iVar1 != 0) {
      uVar2 = FUN_0073078c(*(undefined4 *)(iRam00974a58 + 0x18),param_2);
      return uVar2;
    }
    return (uint)*(ushort *)(param_1 + param_2 * 2 + 0xe);
  }
  return (uint)*(ushort *)(param_1 + 0x42);
}
