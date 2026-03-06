/**
 * FUN_0024910c.c
 * Source line: 298085
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0024910c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_005ca4b4(*(undefined1 *)(param_1 + 0x12));
  if ((iVar1 != 0) || (iVar1 = FUN_005ca530(*(undefined1 *)(param_1 + 0x12)), iVar1 != 0)) {
    uVar2 = FUN_0030ce60();
    iVar1 = FUN_00314bc4();
    if ((iVar1 != 0) &&
       (((uVar3 = FUN_003026cc(uVar2), uVar3 == *(byte *)(param_1 + 0x12) &&
         (iVar1 = FUN_0071831c(uVar2), iVar1 == *(int *)(param_1 + 0x14))) &&
        (iVar1 = FUN_00718340(uVar2), iVar1 == *(int *)(param_1 + 0x18))))) {
      return 1;
    }
  }
  return 0;
}
