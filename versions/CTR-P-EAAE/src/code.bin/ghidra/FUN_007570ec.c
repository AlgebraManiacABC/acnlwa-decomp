/**
 * FUN_007570ec.c
 * Source line: 1112589
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_007570ec(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  
  if ((((param_2 == 0) || (psVar3 = *(short **)(param_2 + 0x1028), psVar3 == NULL)) ||
      (*psVar3 != *(short *)(param_1 + 0xc))) ||
     ((((char)psVar3[10] != *(char *)(param_1 + 0x20) ||
       (iVar1 = FUN_00100d2c((uint *)(psVar3 + 1),(uint *)(param_1 + 0xe),0x12), iVar1 != 0)) ||
      (psVar3[0x16] != *(short *)(param_1 + 0x22))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
