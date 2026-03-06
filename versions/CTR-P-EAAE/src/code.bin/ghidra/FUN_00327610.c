/**
 * FUN_00327610.c
 * Source line: 428092
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00327610(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = param_1 + 0x41c;
  if (*(char *)(param_1 + 0xabf) != '\x01') {
    fVar2 = *(float *)(param_1 + 0x3d4);
    fVar3 = *(float *)(param_1 + 0x420);
    FUN_00568984(param_1 + 0x38,param_1 + 0x3cc,*(undefined4 *)(param_1 + 0x484),0);
    FUN_00568630(param_1 + 0x38,iVar1,*(undefined4 *)(param_1 + 0x484),0);
    FUN_005697e0(fVar3 - fVar2,iVar1);
    return;
  }
  FUN_00568630(param_1 + 0x38,iVar1,*(undefined4 *)(param_1 + 0x484),0);
  FUN_005697e0(0,iVar1);
  return;
}
