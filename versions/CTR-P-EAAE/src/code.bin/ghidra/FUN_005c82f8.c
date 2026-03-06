/**
 * FUN_005c82f8.c
 * Source line: 876989
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_005c82f8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(param_1,0);
  if ((((iVar1 == 0) || (*(char *)(iVar1 + 0x1a9) != '4')) &&
      ((iVar1 = FUN_005c33d0(param_1,0), iVar1 == 0 || (*(char *)(iVar1 + 0x1a9) != '5')))) &&
     ((iVar1 = FUN_005c33d0(param_1,0), iVar1 == 0 || (*(char *)(iVar1 + 0x1a9) != '3')))) {
    return 0;
  }
  return 1;
}
