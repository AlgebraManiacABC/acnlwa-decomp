/**
 * FUN_005c710c.c
 * Source line: 876048
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005c710c(void)

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
    GET_DAT_0095bf74();
    return;
  }
  return;
}
