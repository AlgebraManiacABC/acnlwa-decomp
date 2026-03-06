/**
 * FUN_005647d4.c
 * Source line: 807543
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined1 FUN_005647d4(uint param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 < 0x10 && param_2 < 0x10) {
    GET_BYTE_00957322();
    iVar1 = FUN_0056549c();
    return *(undefined1 *)(iVar1 + param_2 * 0x10 + param_1);
  }
  return 0;
}
