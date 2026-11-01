#include "../../../include/types.h"

void FUN_00448ef8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_0044f164(uRam00974a6c);
  UNRECOVERED_JUMPTABLE = *(code **)*param_2;
  if (iVar1 != 0) {
    (*UNRECOVERED_JUMPTABLE)();
    *(undefined1 *)(iVar1 + 0x20) = 6;
    return;
  }
  (*UNRECOVERED_JUMPTABLE)(param_2,UNRECOVERED_JUMPTABLE,0,1);
  return;
}
