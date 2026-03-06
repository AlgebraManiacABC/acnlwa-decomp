/**
 * FUN_0041725c.c
 * Source line: 582456
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0041725c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x1f28;
  thunk_FUN_00135748(iVar2);
  if ((*(char *)(param_1 + 0x1f26) != '\0') && (iVar1 = FUN_00425928(param_1 + 0x1f18), iVar1 < 0))
  {
    thunk_FUN_001357ec(iVar2);
    return 0xe0a14827;
  }
  thunk_FUN_001357ec(iVar2);
  return 0;
}
