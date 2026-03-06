/**
 * FUN_001f574c.c
 * Source line: 257040
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_001f574c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_002fcb34(param_2);
  if (((iVar1 != 0x28 && iVar1 != 0x27) && (iVar1 != 0x24 && iVar1 != 0x26)) &&
     ((iVar1 != 0x25 && iVar1 != 0x98) && iVar1 != 0x9a)) {
    bVar3 = *(char *)(param_1 + 0x249) == '\0';
    if (bVar3) {
      *(undefined1 *)(param_1 + 0x249) = 3;
      FUN_0059aab0(0x41000000,param_2,param_3,param_4,param_1,1,0,0,0,0);
    }
    return (uint)bVar3;
  }
  uVar2 = FUN_001f6b58(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}
