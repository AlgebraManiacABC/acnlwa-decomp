/**
 * FUN_00332b80.c
 * Source line: 435030
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00332b80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0010b86c();
  if (*(char *)(param_1 + 0xb1b) != '\0') {
    iVar2 = FUN_001abd24(0,0x3f800000,0,param_1 + 0xb24,0xae,0,2,0,0,0);
    if (iVar2 != 0) {
      *(byte *)(param_1 + 0xda4) = *(byte *)(param_1 + 0xda4) | 4;
    }
  }
  return uVar1;
}
