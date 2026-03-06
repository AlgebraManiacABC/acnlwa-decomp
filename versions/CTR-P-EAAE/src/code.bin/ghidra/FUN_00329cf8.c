/**
 * FUN_00329cf8.c
 * Source line: 429995
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_00329cf8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(**(int **)(param_2 + 0x264) + (uint)*(byte *)(param_3 + 4) * 4);
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x16) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    FUN_006ea834(0,0x40c00000,iVar1 + 0x78,0,0x116,2,0);
  }
  return iVar1 != 0;
}
