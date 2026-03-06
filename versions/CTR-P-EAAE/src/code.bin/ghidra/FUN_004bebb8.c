/**
 * FUN_004bebb8.c
 * Source line: 700798
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004bebb8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = *(undefined4 *)(&UNK_008b3ca8 + param_3 * 4);
  local_14 = *(undefined4 *)(&UNK_008b3ca8 + param_4 * 4);
  local_10 = *(undefined4 *)(&UNK_008b3ca8 + param_5 * 4);
  FUN_007bd0d4(*(undefined4 *)(param_1 + param_2 * 4 + 0x240),1,&local_18);
  return;
}
