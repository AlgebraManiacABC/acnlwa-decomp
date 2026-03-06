/**
 * FUN_005456e8.c
 * Source line: 788189
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005456e8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  *param_3 = &UNK_00903e78;
  *(undefined1 *)(param_3 + 1) = 1;
  *(undefined1 *)((int)param_3 + 5) = 1;
  *(undefined1 *)(param_3 + 0x22) = uRam00975328;
  param_3[0x23] = uRam0097532c;
  param_3[0x24] = uRam00975330;
  *param_3 = &PTR_s_select_bclan_009049d8;
  param_3[0x25] = param_1;
  param_3[0x26] = param_2;
  param_3[0x27] = (*(float *)(param_4 + 0x10) - *(float *)(param_4 + 8)) * 0.5;
  param_3[0x28] = -((*(float *)(param_4 + 0x10) - *(float *)(param_4 + 8)) * 0.5);
  param_3[0x29] = -((*(float *)(param_4 + 0xc) - *(float *)(param_4 + 4)) * 0.5);
  param_3[0x2a] = (*(float *)(param_4 + 0xc) - *(float *)(param_4 + 4)) * 0.5;
  *(undefined1 *)(param_3 + 0x22) = *(undefined1 *)(param_4 + 0x14);
  return;
}
