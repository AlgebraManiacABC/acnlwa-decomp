/**
 * FUN_0071b708.c
 * Source line: 1073863
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0071b708(ushort *param_1,undefined4 param_2)

{
  int iVar1;
  int aiStack_650 [400];
  
  __rt_memcpy_w(aiStack_650,0xa83afc,0x63c);
  iVar1 = aiStack_650[*param_1];
  *(undefined1 *)(iVar1 + 0xf) = 0;
  FUN_003083e4(DAT_0095debc,param_2,"STR_NNpc_habit",iVar1 + 10);
  return;
}
