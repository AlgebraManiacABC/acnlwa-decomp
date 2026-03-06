/**
 * FUN_0017e7fc.c
 * Source line: 196691
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_0017e7fc(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *mem;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  iVar3 = (-iVar1 & 0x1fU) + param_3;
  *param_1 = iVar3 + iVar1;
  *param_2 = iVar2 - iVar3;
  mem = (undefined4 *)(iVar1 + (-iVar1 & 0x1fU));
  __rt_memclr(mem,param_3);
  return mem;
}
