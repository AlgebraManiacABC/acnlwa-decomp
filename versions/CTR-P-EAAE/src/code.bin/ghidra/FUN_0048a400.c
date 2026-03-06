/**
 * FUN_0048a400.c
 * Source line: 660561
 * Body lines: 13
 */
#include "../../../include/types.h"

FUN_0048a400(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 local_18;
  
  local_18 = param_4;
  FUN_00135748(0xae0b5c);
  bVar2 = iRam00974eec == 0;
  FUN_001357ec(0xae0b5c);
  if ((bVar2) && (iVar1 = FUN_0012b228(), iVar1 == 0)) {
    return 0;
  }
  local_18 = 0;
  FUN_0048ad54(&local_18,*param_1);
  return local_18;
}
