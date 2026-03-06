/**
 * FUN_0028f8bc.c
 * Source line: 334097
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0028f8bc(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
  fVar3 = 0.0;
  fVar1 = (SQRT(fVar2 * fVar2 + fVar1 * fVar1) * 0.6 - 100.0) * 0.006666667;
  if ((0.0 <= fVar1) && (fVar3 = fVar1, 1.0 < fVar1)) {
    fVar3 = 1.0;
  }
          // WARNING: Could not recover jumptable at 0x0028f934. Too many branches
          // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_DAT_0097534c)[bRam00995644])(fVar3,0x995644,uRam00995640);
  return;
}
