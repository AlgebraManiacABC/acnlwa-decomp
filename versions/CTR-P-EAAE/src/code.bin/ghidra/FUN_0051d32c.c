/**
 * FUN_0051d32c.c
 * Source line: 762117
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0051d32c(uint param_1)

{
  int iVar1;
  
  if (param_1 < 10) {
    iVar1 = FUN_0030b6c4();
    if (iVar1 == 0) {
      return (int)*(char *)(DAT_0095386c + param_1 + 0x8e);
    }
    if (param_1 * 0x50 != -0xa82c58) {
      return (int)*(char *)(param_1 * 0x50 + 0xa82ca7);
    }
  }
  return 0;
}
