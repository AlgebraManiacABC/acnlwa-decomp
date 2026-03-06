/**
 * FUN_0036ed78.c
 * Source line: 476266
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0036ed78(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0036d010(param_1,0x6e);
  *puVar1 = &UNK_008fb948;
  iVar2 = FUN_0039af84(puVar1 + 4,0);
  *(undefined2 *)(iVar2 + 0x20) = 0x6e;
  *(undefined1 *)(iVar2 + -3) = 0;
  return iVar2 + -0x10;
}
