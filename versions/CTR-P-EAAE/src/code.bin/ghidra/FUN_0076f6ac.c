/**
 * FUN_0076f6ac.c
 * Source line: 1132582
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0076f6ac(int *param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  if ((float)param_1[0x17] != 0.0) {
    pfVar1 = (float *)(**(code **)(*param_2 + 0x58))();
    pfVar2 = (float *)(**(code **)(*param_1 + 0x58))(param_1);
    if (pfVar1 != NULL && pfVar2 != NULL) {
      if (((-(float)param_1[0x18] <= pfVar1[1] - pfVar2[1]) &&
          (pfVar1[1] - pfVar2[1] <= (float)param_1[0x18])) &&
         ((*pfVar1 - *pfVar2) * (*pfVar1 - *pfVar2) +
          (pfVar1[2] - pfVar2[2]) * (pfVar1[2] - pfVar2[2]) < (float)param_1[0x17])) {
        return 1;
      }
    }
  }
  return 0;
}
