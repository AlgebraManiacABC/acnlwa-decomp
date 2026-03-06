/**
 * FUN_006a1ca0.c
 * Source line: 1001697
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_006a1ca0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0xeb54);
  while( true ) {
    if (puVar2 == *(undefined4 **)(param_1 + 0xeb58)) {
      return 0;
    }
    piVar3 = (int *)*puVar2;
    if ((piVar3 != NULL) && (piVar3[0x15] == param_2)) break;
    puVar2 = puVar2 + 1;
  }
          // WARNING: Could not recover jumptable at 0x006a1d00. Too many branches
          // WARNING: Treating indirect jump as call
  uVar1 = (**(code **)(*piVar3 + 0xe8))(piVar3,param_3);
  return uVar1;
}
