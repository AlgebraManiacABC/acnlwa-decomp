/**
 * FUN_004ca114.c
 * Source line: 709500
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004ca114(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + param_2 * 4) + 0x68);
  __rt_memcpy((uint *)(iVar1 + 0x7c),param_3,0x20);
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 0x40;
  return;
}
