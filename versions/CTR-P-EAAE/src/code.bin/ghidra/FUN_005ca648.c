/**
 * FUN_005ca648.c
 * Source line: 878619
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005ca648(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = DAT_0095bf74;
  uVar3 = *DAT_0095bf74;
  uVar4 = uVar3 + 1;
  uVar2 = DAT_0095bf74[1] + (uint)(0xfffffffe < uVar3);
  DAT_0095bf74[1] = uVar2;
  *puVar1 = uVar4;
  if (uVar4 == 0 && uVar2 == 0) {
    puVar1[1] = uVar2 + (0xfffffffe < uVar4);
    *puVar1 = uVar3 + 2;
  }
  return;
}
