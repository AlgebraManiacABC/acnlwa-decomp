/**
 * FUN_0031dff8.c
 * Source line: 422615
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0031dff8(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  
  *(int *)(param_1 + 0x60) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined1 *)(param_1 + 0x24) = param_7;
  *(undefined4 *)(param_1 + 0x20) = param_6;
  *(int *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_6;
  *(undefined1 *)(param_1 + 0x16) = 0;
  iVar1 = FUN_0076f954(&DAT_00a14b5c,0xf7);
  FUN_004ec948(param_1 + 0x38,param_2,*(undefined4 *)(iVar1 + 4),param_3 + 4,0);
  iVar1 = FUN_0076f954(&DAT_00a14b5c,0xfa);
  FUN_004ec948(param_1 + 0x6c,param_2,*(undefined4 *)(iVar1 + 8),param_4 + 4,0);
  FUN_0031d7f4(0,0x3f800000,param_1,0xc,2,0);
  FUN_0031d950(0,0x3f800000,param_1,0xc,2,0);
  return;
}
