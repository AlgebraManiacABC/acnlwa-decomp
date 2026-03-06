/**
 * FUN_0037392c.c
 * Source line: 479197
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0037392c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 auStack_20 [16];
  
  FUN_003d4758();
  local_28[0] = 0;
  iVar1 = FUN_0072d944(param_1,local_28);
  if ((iVar1 == 0) && (piVar2 = *(int **)(param_2 + 0x90), piVar2 != NULL)) {
    (**(code **)(*piVar2 + 0x5c))(auStack_20,piVar2,*(undefined4 *)(param_2 + 0x70));
    FUN_003d3a64(param_1,auStack_20);
    local_24[0] = 0;
    FUN_0072d944(param_1,local_24);
  }
  return;
}
