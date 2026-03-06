/**
 * FUN_006408e4.c
 * Source line: 954736
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006408e4(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Item_IsNullItem((Item_t *)(param_1 + 0x288));
  if (((iVar1 == 0) && (uVar2 = Item_IsValidID((Item_t *)(param_1 + 0x288)), uVar2 != 0)) &&
     (uVar2 = FUN_00768268(param_1 + 0x288), uVar2 < 0xb)) {
    FUN_00312a4c(DAT_0095debc,param_2,"STR_Fashion_Looks",uVar2 - 1);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xf0);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x9a8) == '\0')) {
    FUN_0071b79c(iVar1 + 0x9ac,param_2,param_3);
    return;
  }
          // WARNING: Could not recover jumptable at 0x00640968. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x1c))(param_2);
  return;
}
