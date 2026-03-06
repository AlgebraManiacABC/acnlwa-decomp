/**
 * FUN_00169ac4.c
 * Source line: 182650
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00169ac4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = param_2 == 0;
  if (param_1 == 0 || bVar3) {
    param_2 = 0;
  }
  iVar2 = param_2;
  if (((param_1 != 0 && !bVar3) && param_1 != 1) && (iVar2 = param_1, param_2 != 1)) {
    uVar1 = *(int *)(param_1 * 4 + 0xaf4368) + *(int *)(param_2 * 4 + 0xaf4368);
    iVar2 = (int)((longlong)(int)uVar1 * -0x7f7f7f7f + ((ulonglong)uVar1 << 0x20) >> 0x20);
    iVar2 = *(int *)((uVar1 + ((iVar2 >> 7) - (iVar2 >> 0x1f)) * -0xff) * 4 + 0xaf3f68);
  }
  return iVar2;
}
