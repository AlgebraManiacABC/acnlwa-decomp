/**
 * FUN_002343c8.c
 * Source line: 287712
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_002343c8(int param_1,undefined4 param_2,char *param_3)

{
  short sVar1;
  int iVar2;
  
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 1;
  if ((*(short *)(param_1 + 0x2a) == 0) && (iVar2 = FUN_005c0fa0(4), iVar2 != 0)) {
    sVar1 = *(short *)(param_1 + 0x2c) + 1;
    *(short *)(param_1 + 0x2c) = sVar1;
    if (*param_3 != '\x19' || sVar1 != 1) {
      *(undefined1 *)(param_1 + 0x33) = 1;
      return 1;
    }
    FUN_00231a4c(param_1,0,param_2,param_3);
  }
  return 0;
}
