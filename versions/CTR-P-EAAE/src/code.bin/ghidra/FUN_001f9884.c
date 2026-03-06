/**
 * FUN_001f9884.c
 * Source line: 258877
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_001f9884(int param_1,int param_2)

{
  int iVar1;
  
  if (((*(undefined **)(param_1 + 0x20) != &UNK_001f9d4c) || (*(int *)(param_1 + 0x24) != 0)) &&
     ((*(undefined **)(param_1 + 0x20) != &UNK_001f99ac || (*(int *)(param_1 + 0x24) != 0)))) {
    return 0;
  }
  iVar1 = param_1 + 0x494;
  if (param_2 == 0) {
    FUN_004b9b64(param_1 + 0x38,iVar1);
    FUN_005697e0(0,iVar1);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x38);
  }
  FUN_004b9b64(param_1 + 0x38,iVar1);
  FUN_00569508(iVar1);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x38);
}
