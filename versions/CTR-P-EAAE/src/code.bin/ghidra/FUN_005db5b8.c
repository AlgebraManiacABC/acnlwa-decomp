/**
 * FUN_005db5b8.c
 * Source line: 887483
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_005db5b8(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_007559a0(param_3);
  uVar2 = 2;
  if ((_DAT_00aaf14c != 0) && ((int)((uint)*(byte *)(_DAT_00aaf14c + 0x570e) << 0x19) < 0)) {
    iVar1 = FUN_007128b4();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  *param_2 = uVar2;
  return 1;
}
