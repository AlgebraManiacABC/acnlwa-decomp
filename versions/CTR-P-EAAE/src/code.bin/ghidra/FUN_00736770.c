/**
 * FUN_00736770.c
 * Source line: 1091854
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00736770(int param_1)

{
  int iVar1;
  undefined1 auStack_10 [4];
  undefined4 local_c;
  
  if ((((char)(*(int **)(param_1 + 4))[1] == '\0') ||
      (iVar1 = **(int **)(param_1 + 4), *(char *)(iVar1 + 0x44) != '\0')) ||
     (iVar1 = FUN_00475968(auStack_10,iVar1,0), iVar1 == 0)) {
    local_c = 0;
  }
  return local_c;
}
