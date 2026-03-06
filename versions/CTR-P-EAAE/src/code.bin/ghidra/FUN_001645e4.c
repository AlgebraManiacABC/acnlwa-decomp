/**
 * FUN_001645e4.c
 * Source line: 179889
 * Body lines: 12
 */
#include "../../../include/types.h"

bool FUN_001645e4(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 < 0x29) {
    iVar1 = param_2 * 0xc + param_1 * 0x90;
    uVar2 = *(undefined4 *)(&UNK_008bca9c + iVar1 + -0x8c);
    uVar3 = *(undefined4 *)(&UNK_008bca9c + iVar1 + -0x88);
    param_3[2] = *(undefined4 *)(&UNK_008bca9c + iVar1 + -0x84);
    *param_3 = uVar2;
    param_3[1] = uVar3;
  }
  return param_1 < 0x29;
}
