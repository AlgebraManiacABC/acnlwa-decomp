/**
 * FUN_005c7b70.c
 * Source line: 876588
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_005c7b70(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(param_1,0);
  if (((iVar1 == 0) || (*(char *)(iVar1 + 0x1a9) != '/')) &&
     ((iVar1 = FUN_005c33d0(param_1,0), iVar1 == 0 || (*(char *)(iVar1 + 0x1a9) != '+')))) {
    return 0;
  }
  return 1;
}
