/**
 * FUN_0019cd08.c
 * Source line: 208698
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0019cd08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  DAT_0094fd58 |= 0x800;
  uVar1 = FUN_00320548(*(undefined4 *)(param_1 + 0xa328),*(undefined4 *)(param_1 + 0xcc));
  iVar2 = FUN_00758dd4();
  if (iVar2 == 1) {
    FUN_005cbe84(uVar1);
    FUN_002e354c(*(undefined4 *)(param_1 + 0xa328),*(undefined4 *)(param_1 + 0xcc));
  }
  iVar2 = FUN_006d1e64();
  *(undefined1 *)(param_1 + 0x1e9f) = *(undefined1 *)(iVar2 + 0x40);
  FUN_006d33c8(uVar1,1,0x45);
  *(undefined **)(param_1 + 200) = &UNK_002882cc;
  FUN_008165e4(param_1 + 0xa4,&UNK_0019e664,0);
  return;
}
