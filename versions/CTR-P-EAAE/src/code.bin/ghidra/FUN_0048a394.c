/**
 * FUN_0048a394.c
 * Source line: 660537
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0048a394(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_20 [5];
  
  FUN_00135748(0xae0b5c);
  bVar3 = iRam00974eec == 0;
  FUN_001357ec(0xae0b5c);
  if ((bVar3) && (iVar1 = FUN_0012b228(), iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_0048acb8(local_20);
  if ((uVar2 & 0x80000000) != 0) {
    local_20[0] = 0;
  }
  return local_20[0];
}
