/**
 * FUN_00567d60.c
 * Source line: 809670
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00567d60(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 0x22c);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = uVar2;
    iVar1 = FUN_004b6598(param_1 + 0xc,uVar2,&DAT_00567d98);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
