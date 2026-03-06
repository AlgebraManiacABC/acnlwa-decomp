/**
 * FUN_00631668.c
 * Source line: 948062
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00631668(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1028);
  iVar1 = Item_IsNullItem((Item_t *)&DAT_0095bfdc);
  if ((iVar1 == 0) && (iVar1 = FUN_0030bb10(&DAT_0095bfdc), iVar1 == 0)) {
    return 0;
  }
  Item_Copy((Item_t *)(iVar2 + 0x8e6),(Item_t *)&DAT_0095bfdc);
  return 1;
}
