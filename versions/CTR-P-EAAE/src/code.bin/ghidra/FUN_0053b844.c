/**
 * FUN_0053b844.c
 * Source line: 781187
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0053b844(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_10 [8];
  
  puVar1 = (uint *)FUN_0053d2b4(auStack_10);
  uVar2 = (*puVar1 ^ *puVar1 >> 0x1e) * 0x6c078965 + 1;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  param_1[2] = uVar2;
  param_1[3] = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  return;
}
