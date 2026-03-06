/**
 * FUN_0070e424.c
 * Source line: 1065620
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0070e424(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 + -0x28 +
                   *(int *)(param_1 + 8));
  if ((cVar1 == '\x01' || cVar1 == '\x03') &&
     (*(short *)(*(int *)(*(int *)(param_1 + 4) + 0x68) + 0x3c) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
