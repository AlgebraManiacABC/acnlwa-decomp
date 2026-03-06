/**
 * FUN_00532c08.c
 * Source line: 775674
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00532c08(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x284) != 0) {
    *(undefined1 *)(param_1 + 0x309) = 0;
    FUN_004ee9cc(0,param_1 + 0x27c);
    FUN_004ee9a8(0x3f800000,param_1 + 0x27c);
    iVar1 = FUN_00305f44();
    if (iVar1 == param_3) {
      thunk_FUN_0020ad0c(param_1 + 0x298,1);
    }
    FUN_002504d4(param_1 + 0x298,0x100066c);
    return;
  }
  return;
}
