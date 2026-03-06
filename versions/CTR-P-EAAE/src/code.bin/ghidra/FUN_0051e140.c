/**
 * FUN_0051e140.c
 * Source line: 762956
 * Body lines: 14
 */
#include "../../../include/types.h"

void * FUN_0051e140(byte *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x40) == 0) ||
      (iVar3 = *(int *)(param_1 + 0x40) + -1, *(int *)(param_1 + 0x40) = iVar3, iVar3 == 0)) &&
     (((*(uint *)(param_1 + 0x20) & 0x38) == 0 ||
      ((((4 < (*(uint *)(param_1 + 0x20) << 0x1a) >> 0x1d &&
         (uVar1 = (uint)*param_1, (int)(uVar1 << 0x1d) < 0)) && ((int)(uVar1 << 0x1c) < 0)) &&
       ((((int)(uVar1 << 0x1b) < 0 && ((int)(uVar1 << 0x1a) < 0)) && ((int)(uVar1 << 0x19) < 0))))))
     )) {
    return (void *)0x1;
  }
  pvVar2 = GET_DAT_0095bf74();
  return pvVar2;
}
