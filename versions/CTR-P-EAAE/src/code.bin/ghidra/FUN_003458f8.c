/**
 * FUN_003458f8.c
 * Source line: 442615
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_003458f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = param_4;
  iVar1 = FUN_0013dfbc(param_1 + 8,&local_8,param_2,param_3);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x345918);
  }
  return local_8;
}
