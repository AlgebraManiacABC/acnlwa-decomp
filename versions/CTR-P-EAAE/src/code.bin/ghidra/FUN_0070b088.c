/**
 * FUN_0070b088.c
 * Source line: 1062813
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined * FUN_0070b088(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((iVar3 == 0) || (iVar1 = FUN_0030bb10(iVar3 + 0x1c), iVar1 == 0)) {
    puVar2 = &DAT_0095bfdc;
  }
  else {
    puVar2 = (undefined *)(iVar3 + 0x1c);
  }
  return puVar2;
}
