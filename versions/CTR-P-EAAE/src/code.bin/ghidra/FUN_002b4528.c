/**
 * FUN_002b4528.c
 * Source line: 353174
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_002b4528(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0072355c(param_1 + 0x3028);
  if (iVar1 == 1) {
    FUN_001bb1c4(*(undefined4 *)(param_1 + 0x42b0));
    DAT_0094fd25 = (undefined1)*(undefined4 *)(param_1 + 0x42b0);
  }
  DAT_0094fd2b = iVar1 == 1;
  thunk_FUN_00320450(param_1 + 0x4c);
  FUN_006a3bd4(param_1 + 0x2228);
  FUN_0022bf34(param_1 + 0x2c90);
  FUN_0031eb20(param_1 + 0x3b70);
  FUN_002f6c78(param_1 + 0x2b78);
  FUN_00132364(param_1 + 0x4060);
  return 2;
}
