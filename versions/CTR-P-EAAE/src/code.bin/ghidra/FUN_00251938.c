/**
 * FUN_00251938.c
 * Source line: 303064
 * Body lines: 13
 */
#include "../../../include/types.h"

bool FUN_00251938(int param_1,int param_2,undefined4 *param_3,Item_t param_4)

{
  bool bVar1;
  Item_t IStack_10;
  
  param_1 += param_2 * 0xf0;
  bVar1 = *(char *)(param_1 + 0x3fa) == '\x02';
  if (bVar1) {
    *param_3 = *(undefined4 *)(param_1 + 0x3a8);
    param_3[1] = *(undefined4 *)(param_1 + 0x3ac);
    param_3[2] = *(undefined4 *)(param_1 + 0x3b0);
    IStack_10 = param_4;
    FUN_006162e0(&IStack_10,*(undefined1 *)(param_1 + 0x3f8),0);
    Item_Copy((Item_t *)param_4,&IStack_10);
  }
  return bVar1;
}
