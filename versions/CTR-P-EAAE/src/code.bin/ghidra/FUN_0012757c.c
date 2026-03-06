/**
 * FUN_0012757c.c
 * Source line: 128839
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0012757c(int param_1)

{
  int iVar1;
  
  iRam0097d7b4 = param_1;
  __rt_memclr_w(param_1,0x854);
  iVar1 = FUN_0012e23c();
  *(int *)(iRam0097d7b4 + 0x800) = iVar1;
  if (iVar1 != 0) {
    uRam0097d7b8 = 1;
    return 0;
  }
  if (pcRam00974a90 != NULL) {
    (*pcRam00974a90)(0x10000,0x100,0);
  }
  iRam0097d7b4 = 0;
  return 0xffffffff;
}
