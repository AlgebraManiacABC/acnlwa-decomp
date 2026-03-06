/**
 * FUN_0065e1bc.c
 * Source line: 969612
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0065e1bc(undefined4 param_1,undefined4 param_2,undefined2 *param_3,byte param_4,
                 undefined4 param_5,char param_6)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined4 *)(iVar1 + 0xe) = param_5;
  *(byte *)(iVar1 + 0x17) = param_4 & 1 | param_6 << 1;
  FUN_005d41b8(iVar1 + 0x12,param_2);
  *(char *)(iVar1 + 0x16) = (char)((ushort)*param_3 >> 8);
  FUN_0064d0b8(param_1,0x45,iVar1,0);
  return;
}
