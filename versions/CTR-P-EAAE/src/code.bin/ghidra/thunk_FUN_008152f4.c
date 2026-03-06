/**
 * thunk_FUN_008152f4.c
 * Source line: 411877
 * Body lines: 12
 */
#include "../../../include/types.h"

int thunk_FUN_008152f4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x128);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_00755ad4(param_2,iVar2 + 0xc);
    if (iVar1 != 0) break;
    iVar2 = *(int *)(iVar2 + 8);
  }
  return iVar2 + 0x14;
}
