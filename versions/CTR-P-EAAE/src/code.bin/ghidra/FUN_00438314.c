/**
 * FUN_00438314.c
 * Source line: 601893
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00438314(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    iVar3 = iVar2 + 1;
    uVar1 += 2;
    *(undefined1 *)(param_1 + iVar2 * 2 + 0x40) = 0xfd;
    iVar2 += 2;
    *(undefined1 *)(param_1 + iVar3 * 2 + 0x40) = 0xfd;
  } while (uVar1 < 0xc);
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  return 1;
}
