/**
 * FUN_00697fcc.c
 * Source line: 1000010
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_00697fcc(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = param_1 + param_3 * 0xc;
  fVar2 = ABS((*(float *)(param_2 + 0xc) * *(float *)(iVar1 + 0xf0c4) +
               *(float *)(param_2 + 0x10) * *(float *)(iVar1 + 0xf0c8) +
              *(float *)(param_2 + 0x14) * *(float *)(iVar1 + 0xf0cc)) * *(float *)(param_2 + 0x18))
          + *(float *)(param_1 + 0xf114);
  *(float *)(param_1 + 0xf114) = fVar2;
  return 0x41400000 < (int)fVar2;
}
