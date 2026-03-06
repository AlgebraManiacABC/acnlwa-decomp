/**
 * FUN_00729dec.c
 * Source line: 1082867
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00729dec(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(char *)(param_1 + 0xc) == '\0') && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) &&
     (param_2 != 0)) {
    if (param_2 == 10) {
      uVar2 = *(undefined4 *)(iVar1 + 0x28);
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x2c);
    }
    return uVar2;
  }
  return 0;
}
