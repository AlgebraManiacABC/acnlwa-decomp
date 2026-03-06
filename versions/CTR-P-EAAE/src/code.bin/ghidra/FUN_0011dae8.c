/**
 * FUN_0011dae8.c
 * Source line: 120805
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0011dae8(void)

{
  uint uVar1;
  undefined4 local_10 [2];
  
  FUN_0011daac();
  FUN_0011db88();
  FUN_0011db74();
  FUN_0011db0c();
  FUN_00127c5c();
  uVar1 = nn::svc::GetProcessInfo(local_10,0xffff8001,0x14);
  if ((uVar1 & 0x80000000) != 0) {
    FUN_0012f204();
  }
  uRam0098160c = local_10[0];
  return;
}
