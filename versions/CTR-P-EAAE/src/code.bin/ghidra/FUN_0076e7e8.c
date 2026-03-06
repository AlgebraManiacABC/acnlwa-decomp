/**
 * FUN_0076e7e8.c
 * Source line: 1131648
 * Body lines: 3
 */
#include "../../../include/types.h"

ushort FUN_0076e7e8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006158c4();
  return *(ushort *)(iVar1 + *(char *)(param_1 + 0xc) * 0x14 + 0x22) & 0xff;
}
