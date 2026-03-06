/**
 * FUN_00550438.c
 * Source line: 794563
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00550438(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    uVar2 = *(int *)(param_1 + 0x834) + 1U & *(uint *)(param_1 + 0x850);
    *(uint *)(param_1 + 0x834) = uVar2;
    if (*(int *)(*(int *)(param_1 + 0x424) + uVar2 * 0x124 + 0x114) == 0) {
      *(int *)(param_1 + 0x870) = *(int *)(param_1 + 0x870) + 1;
      return *(int *)(param_1 + 0x424) + *(int *)(param_1 + 0x834) * 0x124;
    }
    iVar1 += 1;
  } while (iVar1 < *(int *)(param_1 + 0x844));
  FUN_0055030c(param_1,&DAT_005504bc);
  return 0;
}
