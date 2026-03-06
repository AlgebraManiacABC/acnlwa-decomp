/**
 * FUN_005c4e00.c
 * Source line: 874321
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005c4e00(void)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar1 = FUN_00305f44();
  uVar3 = *(undefined1 *)((uVar1 & 3) + 0xaad990);
  iVar2 = FUN_002fdf00(uVar3);
  if (iVar2 == 0) {
    uVar3 = 8;
  }
  iVar2 = FUN_0027ab40(uVar3);
  if (iVar2 != 0) {
    FUN_002fae84();
    return;
  }
  return;
}
