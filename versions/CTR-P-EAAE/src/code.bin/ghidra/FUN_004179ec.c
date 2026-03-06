/**
 * FUN_004179ec.c
 * Source line: 582832
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_004179ec(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0041965c();
  *puVar1 = &UNK_008ffa00;
  *(undefined2 *)((int)puVar1 + 0x1f16) = 0;
  iVar2 = FUN_00425974(puVar1 + 0x7c6);
  iVar2 = FUN_00426db4(iVar2 + 0x10,0xffffffff);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined2 *)(iVar2 + -0x1ee6) = 0;
  *(undefined2 *)(iVar2 + -0x1ee4) = 0xffff;
  *(undefined4 *)(iVar2 + -0xd04) = 200;
  FUN_00418254(iVar2 + -0x1f28);
  *(undefined2 *)(iVar2 + -0x1ee8) = *(undefined2 *)(iVar2 + -0x1ee6);
  return iVar2 + -0x1f28;
}
