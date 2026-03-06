/**
 * FUN_007571a0.c
 * Source line: 1112634
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_007571a0(int param_1,astruct_7 *param_2,undefined2 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if ((cVar1 == '\x14' || cVar1 == '\x15') || (cVar1 == '\x16')) {
    iVar2 = 6;
  }
  else {
    iVar2 = 4;
  }
  if ((param_4 < iVar2) && (param_1 += param_4 * 0x18, *(short *)(param_1 + 0x3a) != -1)) {
    astruct_7_Copy(param_2,(astruct_7 *)(param_1 + 0x24));
    *param_3 = *(undefined2 *)(param_1 + 0x3a);
    return 1;
  }
  return 0;
}
