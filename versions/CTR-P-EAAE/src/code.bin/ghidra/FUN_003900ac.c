/**
 * FUN_003900ac.c
 * Source line: 498394
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_003900ac(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  iVar1 = nn::svc::GetThreadId(&local_8,0xffff8000);
  if (iVar1 < 0) {
    FUN_0012f204();
  }
  return local_8;
}
