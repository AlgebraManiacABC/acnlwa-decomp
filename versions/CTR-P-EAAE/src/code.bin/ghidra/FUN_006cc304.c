/**
 * FUN_006cc304.c
 * Source line: 1028742
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_006cc304(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005ca4b4(param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_005ca5c0(param_3), iVar1 != 0)) {
    uVar2 = FUN_0030ce60();
    iVar1 = FUN_00314bc4();
    if ((iVar1 == 0) ||
       (((iVar1 = FUN_003026cc(uVar2), iVar1 != param_3 ||
         (iVar1 = FUN_0071831c(uVar2), iVar1 != param_1)) ||
        (iVar1 = FUN_00718340(uVar2), iVar1 != param_2)))) {
      return 1;
    }
  }
  return 0;
}
