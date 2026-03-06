/**
 * FUN_004bec6c.c
 * Source line: 700835
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004bec6c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  if (param_4 != 0) {
    uStack_c = 0x8578;
  }
  if (param_4 == 0) {
    uStack_c = 0x8579;
  }
  uStack_10 = 0x8578;
  if (param_3 == 0) {
    uStack_10 = 0x8579;
  }
  FUN_007bd0e4(*(undefined4 *)(param_1 + param_2 * 4 + 0x2b8),&uStack_10,2,1);
  return;
}
