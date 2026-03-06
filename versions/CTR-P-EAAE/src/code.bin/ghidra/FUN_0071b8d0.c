/**
 * FUN_0071b8d0.c
 * Source line: 1073976
 * Body lines: 3
 */
#include "../../../include/types.h"

byte FUN_0071b8d0(ushort *param_1)

{
  int aiStack_650 [400];
  
  __rt_memcpy_w(aiStack_650,0xa83afc,0x63c);
  return *(byte *)(aiStack_650[*param_1] + 0x1c) >> 4;
}
