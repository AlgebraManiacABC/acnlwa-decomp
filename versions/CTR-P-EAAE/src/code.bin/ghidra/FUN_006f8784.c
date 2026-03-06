/**
 * FUN_006f8784.c
 * Source line: 1053435
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_006f8784(float *param_1)

{
  int iVar1;
  float local_18 [2];
  float local_10;
  
  iVar1 = FUN_006d0848();
  if (iVar1 != 0) {
    FUN_0076f214(local_18,iVar1,param_1);
    if (((uRam0095270c & 1) == 0) && (iVar1 = FUN_002fe7dc(0x95270c), iVar1 != 0)) {
      fRam00952710 = 16384.0;
    }
    if ((*param_1 - local_18[0]) * (*param_1 - local_18[0]) +
        (param_1[2] - local_10) * (param_1[2] - local_10) < fRam00952710) {
      return 1;
    }
  }
  return 0;
}
