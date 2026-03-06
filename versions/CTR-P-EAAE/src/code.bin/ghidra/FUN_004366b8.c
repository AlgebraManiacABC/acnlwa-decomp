/**
 * FUN_004366b8.c
 * Source line: 600931
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_004366b8(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint unaff_r5;
  
  iVar1 = FUN_00448610(iRam0097d428);
  if (iVar1 < 0) {
    (**(code **)(**(int **)(iRam00974a64 + 8) + 0x14))();
          // WARNING: Could not recover jumptable at 0x00436704. Too many branches
          // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(*param_1 + 0x34))(param_1,iVar1);
    return uVar2;
  }
  *(undefined1 *)(iRam0097d428 + 0xa4) = 1;
  param_1[9] = (int)FUN_00436af0;
  param_1[10] = 0;
  param_1[0xb] = (int)"AutoMatchmakeJob::WaitCreateMesh";
  return unaff_r5 & 0xff00 | 5;
}
