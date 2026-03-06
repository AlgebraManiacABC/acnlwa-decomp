/**
 * FUN_00766770.c
 * Source line: 1124642
 * Body lines: 7
 */
#include "../../../include/types.h"

longlong FUN_00766770(uint param_1,int param_2)

{
  longlong lVar1;
  
  software_interrupt(GetSystemTick);
  lVar1 = _ll_sdiv(CONCAT44(param_2 - (*(int *)(param_1 + 0xc) +
                                      (uint)(param_1 < *(uint *)(param_1 + 8))),
                            param_1 - *(uint *)(param_1 + 8)),lRam009753d8);
  lVar1 = _ll_sdiv(lVar1,0x3c);
  return lVar1;
}
