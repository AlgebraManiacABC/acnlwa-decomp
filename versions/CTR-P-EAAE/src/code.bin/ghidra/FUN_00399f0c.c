/**
 * FUN_00399f0c.c
 * Source line: 504372
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00399f0c(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_003cd24c();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  if (piRam009702c0 != NULL) {
    (**(code **)(*piRam009702c0 + 0xc))();
  }
          // WARNING: Could not recover jumptable at 0x00399f5c. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}
