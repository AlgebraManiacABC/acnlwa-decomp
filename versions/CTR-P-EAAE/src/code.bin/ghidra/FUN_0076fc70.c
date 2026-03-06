/**
 * FUN_0076fc70.c
 * Source line: 1132834
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_0076fc70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xae8) == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00305630((Item_t *)(param_1 + *(int *)(param_1 + 0xae8) * 4 + 0x40cc));
    iVar1 = (uint)(0.0 < (float)(longlong)iVar1 * 1.2) * (int)((float)(longlong)iVar1 * 1.2);
  }
  return iVar1;
}
