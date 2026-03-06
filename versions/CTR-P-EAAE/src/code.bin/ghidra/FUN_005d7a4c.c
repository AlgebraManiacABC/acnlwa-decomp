/**
 * FUN_005d7a4c.c
 * Source line: 885844
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005d7a4c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  uRam0095df3c = (ushort)((uint)(iVar1 << 0x18) >> 0x10) | (ushort)(byte)((uint)iVar1 >> 8);
  uRam0095df3e = (ushort)(((uint)(iVar1 << 8) >> 0x18) << 8) | (ushort)(byte)((uint)iVar1 >> 0x18);
  *param_1 = 0x95df34;
  return;
}
