/**
 * FUN_0035c5dc.c
 * Source line: 462076
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0035c5dc(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined *local_8c [22];
  undefined1 auStack_34 [16];
  undefined1 local_24;
  int local_20;
  undefined4 local_1c [2];
  
  local_8c[0] = &UNK_00901164;
  local_24 = 0;
  FUN_00482198(local_8c);
  local_20 = *(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18);
  local_1c[0] = *(undefined4 *)(param_2 + 0x10);
  FUN_0035c668(param_1,&local_20,local_1c,1,local_8c);
  FUN_003cf308(param_3,auStack_34,0x10,0xffffffff);
  return 1;
}
