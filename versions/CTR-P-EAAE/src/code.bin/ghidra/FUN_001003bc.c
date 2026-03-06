/**
 * FUN_001003bc.c
 * Source line: 103552
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_001003bc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = FUN_002f6e64(auStack_18,"WeatherHeap");
  uRam00952c48 = FUN_002f6e78(0x7600,uVar1,param_1,1,0);
  FUN_002f6e8c(auStack_18);
  return uRam00952c48;
}
