/**
 * FUN_00692114.c
 * Source line: 997127
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00692114(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = FUN_00751870();
    if (iVar2 == 0x1e) {
      uVar1 = OnUnresolved(param_1);
      return uVar1;
    }
    if (iVar2 == 0x1f) {
      uVar1 = OnUnresolved(param_1);
      return uVar1;
    }
  }
  return 0;
}
