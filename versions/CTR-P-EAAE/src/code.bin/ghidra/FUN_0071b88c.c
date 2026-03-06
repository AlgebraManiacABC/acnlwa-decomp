/**
 * FUN_0071b88c.c
 * Source line: 1073962
 * Body lines: 6
 */
#include "../../../include/types.h"

int FUN_0071b88c(ushort *param_1)

{
  int iVar1;
  int aiStack_650 [400];
  
  __rt_memcpy_w(aiStack_650,0xa83afc,0x63c);
  iVar1 = aiStack_650[*param_1];
  *(undefined1 *)(iVar1 + 0xf) = 0;
  return iVar1 + 10;
}
