/**
 * FUN_00224950.c
 * Source line: 279973
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00224950(int param_1)

{
  int iVar1;
  
  FUN_00224a7c(*(float *)(param_1 + 0x88) - 1.0,param_1,3);
  iVar1 = FUN_0056878c(*(undefined4 *)(param_1 + 4),"P_list_arrow_00");
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xfe;
  return;
}
