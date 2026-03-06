/**
 * FUN_0041a438.c
 * Source line: 584261
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0041a438(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 0x44);
  puVar1 = (undefined1 *)(**(code **)(*param_2 + 8))(param_2);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar1 + 4);
  puVar2[0x10c] = puVar1[0x10c];
  __rt_memcpy_w(puVar2 + 8,puVar1 + 8,*(undefined4 *)(puVar1 + 0x108));
  *(undefined4 *)(puVar2 + 0x108) = *(undefined4 *)(puVar1 + 0x108);
  __rt_memcpy((uint *)(puVar2 + 0x10d),(uint *)(puVar1 + 0x10d),*(uint *)(puVar1 + 0x1d8));
  *(undefined4 *)(puVar2 + 0x1d8) = *(undefined4 *)(puVar1 + 0x1d8);
  return;
}
