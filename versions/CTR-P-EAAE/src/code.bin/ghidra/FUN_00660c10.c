/**
 * FUN_00660c10.c
 * Source line: 970698
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00660c10(undefined4 param_1,undefined1 param_2,undefined1 param_3,byte param_4,
                 undefined4 *param_5,char param_6,char param_7,char param_8)

{
  int iVar1;
  
  iVar1 = FUN_00656c20(param_1);
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(undefined1 *)(iVar1 + 0xf) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = *param_5;
  *(byte *)(iVar1 + 0x1c) =
       ((*(byte *)(iVar1 + 0x1c) & 0xf6 | param_8 << 3 | param_4) & 0xfd | param_6 << 1) & 0xfb |
       param_7 << 2;
  FUN_005d41b8(iVar1 + 0x14,&DAT_00ae5658);
  FUN_0064d0b8(param_1,0x58,iVar1,0);
  return;
}
