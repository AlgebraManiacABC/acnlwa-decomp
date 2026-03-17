/**
 * FUN_0031b394.c
 * Source line: 420526
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0031b394(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002f7a10();
  if (*(char *)(*piVar1 + 0x101) != '\x01') {
    return 1;
  }
  return *(undefined4 *)(*piVar1 + 0x10b);
}
