/**
 * FUN_0018fb98.c
 * Source line: 204229
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0018fb98(int param_1,uint param_2,int param_3,Item_t *param_4,undefined1 param_5)

{
  int iVar1;
  
  if ((param_2 < 4) && (iVar1 = param_1 + 0x14 + param_2 * 0x78, *(int *)(iVar1 + 0x44) == param_3))
  {
    Item_Copy((Item_t *)(iVar1 + 0x6c),param_4);
    *(undefined1 *)(iVar1 + 0x70) = param_5;
    return 1;
  }
  return 0;
}
