/**
 * FUN_0076064c.c
 * Source line: 1120127
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_0076064c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00713a5c();
  if (iVar1 != 0) {
    return *(uint *)(param_1 + 0x218) & 0xff;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xf0) + 0x102c);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_00318944(iVar1 + 0x28);
    uVar2 = (uint)(byte)(&UNK_0083fe18)[iVar1];
  }
  return uVar2;
}
