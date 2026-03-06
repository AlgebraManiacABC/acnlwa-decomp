/**
 * FUN_007e9f08.c
 * Source line: 1191893
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_007e9f08(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x458);
  iVar2 = 0;
  if (iVar1 != 0) {
    do {
      FUN_00569420(param_1 + iVar2 * 0x14c + 0x170,param_1 + iVar2 * 0x28 + 0x458);
      iVar2 += 1;
    } while (iVar2 < 2);
    *(undefined1 *)(param_1 + 0x74c) = 0;
    FUN_0081a9d0(param_1,&UNK_007ea030,0);
    return;
  }
  FUN_00569544(param_1 + 0x458);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x170);
}
