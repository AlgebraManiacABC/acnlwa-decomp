/**
 * FUN_0023c558.c
 * Source line: 292455
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0023c558(char *param_1)

{
  undefined *local_20;
  undefined1 *local_1c;
  undefined4 uStack_18;
  undefined1 local_14 [15];
  undefined1 uStack_5;
  
  local_1c = local_14;
  uStack_18 = 0x10;
  uStack_5 = 0;
  local_14[0] = 0;
  local_20 = &UNK_00904874;
  FUN_0030f48c(&local_20,"%1d%1d%1d%1d",(char *)(int)*param_1,(int)param_1[1]);
  (**(code **)(local_20 + 8))(&local_20);
  FUN_003508e4(local_1c);
  return;
}
