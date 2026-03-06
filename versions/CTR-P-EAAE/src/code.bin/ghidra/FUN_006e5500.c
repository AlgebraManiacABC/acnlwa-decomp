/**
 * FUN_006e5500.c
 * Source line: 1043218
 * Body lines: 8
 */
#include "../../../include/types.h"

ushort FUN_006e5500(void)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_00535a68();
  uVar1 = 0;
  if ((iVar2 != 0) && (uVar1 = *(ushort *)(iVar2 + 2), 0x275 < uVar1)) {
    uVar1 = 0;
  }
  return uVar1;
}
