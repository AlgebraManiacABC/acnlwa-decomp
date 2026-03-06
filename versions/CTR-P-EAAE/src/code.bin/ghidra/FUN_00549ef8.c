/**
 * FUN_00549ef8.c
 * Source line: 790648
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00549ef8(int param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x11c) = *param_2;
  *(undefined4 *)(param_1 + 0x120) = param_2[1];
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 300) = *param_4;
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  *(undefined4 *)(param_1 + 0x134) = uVar2;
  *(undefined4 *)(param_1 + 0x138) = uVar3;
  (**(code **)(*param_3 + 8))(param_3);
  FUN_0053f0f4(param_1 + 0x108,param_3[1],0xffffffff,1,0);
  return;
}
