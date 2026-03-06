/**
 * FUN_006cf600.c
 * Source line: 1030265
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_006cf600(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == '\0') {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_004f1328(param_1 + 0xc);
    uVar1 = *(undefined4 *)(iVar2 + 8);
  }
  return uVar1;
}
