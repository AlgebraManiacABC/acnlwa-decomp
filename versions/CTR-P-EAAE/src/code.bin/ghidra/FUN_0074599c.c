/**
 * FUN_0074599c.c
 * Source line: 1101875
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined1 FUN_0074599c(int param_1)

{
  undefined1 uVar1;
  
  if ((((((*(int *)(param_1 + 0xc) == 0) || (*(char *)(*(int *)(param_1 + 0xc) + 4) != '\x01')) &&
        ((*(int *)(param_1 + 0x10) == 0 || (*(char *)(*(int *)(param_1 + 0x10) + 4) != '\x01')))) &&
       ((*(int *)(param_1 + 0x14) == 0 || (*(char *)(*(int *)(param_1 + 0x14) + 4) != '\x01')))) &&
      ((*(int *)(param_1 + 0x18) == 0 || (*(char *)(*(int *)(param_1 + 0x18) + 4) != '\x01')))) &&
     ((*(int *)(param_1 + 0x1c) == 0 || (*(char *)(*(int *)(param_1 + 0x1c) + 4) != '\x01')))) {
    if ((*(int *)(param_1 + 0x20) == 0) ||
       (uVar1 = 1, *(char *)(*(int *)(param_1 + 0x20) + 4) != '\x01')) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 1;
}
