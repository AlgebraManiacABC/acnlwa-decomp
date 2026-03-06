/**
 * FUN_007ea5d0.c
 * Source line: 1192091
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_007ea5d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x740);
  iVar2 = 0;
  if (iVar1 != 0) {
    do {
      FUN_00569420(param_1 + iVar2 * 0x14c + 0x170,param_1 + iVar2 * 0x28 + 0x740);
      iVar2 += 1;
    } while (iVar2 < 4);
    *(undefined1 *)(param_1 + 0xc44) = 0;
    FUN_0081aad8(param_1,&UNK_007ea6e4,0);
    return;
  }
  FUN_00569544(param_1 + 0x740);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x170);
}
