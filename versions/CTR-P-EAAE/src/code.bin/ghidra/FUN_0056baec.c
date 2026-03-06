/**
 * FUN_0056baec.c
 * Source line: 813062
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0056baec(int *param_1)

{
  uint uVar1;
  int iVar2;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  FUN_00308efc(&local_18);
  uVar1 = ((local_18 + -0xb) % 0x13) * 0xb + *(int *)(&UNK_008902cc + (char)local_14 * 4) +
          local_14._1_1_ + 2;
  iVar2 = (int)((longlong)(int)uVar1 * -0x77777777 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  return uVar1 + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * -0x1e;
}
