/**
 * FUN_001995d4.c
 * Source line: 208296
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001995d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00724400(param_1 + 0x1ec0,*(undefined4 *)(param_1 + 0xcc),param_3,param_4,param_4);
  FUN_002fcb34();
  Item_Copy((Item_t *)(param_1 + 0x1eba),(Item_t *)&DAT_0095bfdc);
  iVar2 = FUN_005bff24(uVar1,(Item_t *)(param_1 + 0x1eba),0);
  if (iVar2 != 0) {
    FUN_002fb94c();
    return;
  }
  FUN_008165e4(param_1 + 0xa4,&UNK_0019a520,0);
  return;
}
