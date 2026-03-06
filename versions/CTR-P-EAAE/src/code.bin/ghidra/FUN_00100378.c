/**
 * FUN_00100378.c
 * Source line: 103538
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00100378(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = FUN_002f6e64(auStack_18,"NetGameHeap");
  uRam00952ca0 = FUN_002f6e78(0xd4800,uVar1,param_1,1,1);
  FUN_002f6e8c(auStack_18);
  return uRam00952ca0;
}
