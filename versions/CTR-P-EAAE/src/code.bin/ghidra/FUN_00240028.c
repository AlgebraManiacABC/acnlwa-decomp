/**
 * FUN_00240028.c
 * Source line: 294203
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_00240028(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_20 [8];
  uint local_18;
  
  iVar1 = FUN_006caf18();
  if (iVar1 != 0) {
    FUN_0023fc84(auStack_20,(param_1 & 0xff00) >> 8,param_1 & 0xff,param_2);
    if ((local_18 & 0xff) < 0xfc) {
      return local_18 & 0xff;
    }
  }
  return 0xfc;
}
