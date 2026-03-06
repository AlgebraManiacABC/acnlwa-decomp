/**
 * FUN_004126a0.c
 * Source line: 578929
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004126a0(int param_1)

{
  short sVar1;
  short extraout_r1;
  
  sVar1 = *(short *)(param_1 + 0x54);
  if (*(short *)(param_1 + 0x56) != sVar1) {
    __aeabi_uidivmod(*(uint *)(param_1 + 0x4c) & 0xffff);
    *(short *)(param_1 + 0x10) = extraout_r1 + sVar1;
  }
  return;
}
