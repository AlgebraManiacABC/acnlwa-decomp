/**
 * FUN_0051d380.c
 * Source line: 762136
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0051d380(uint param_1)

{
  int iVar1;
  
  if (param_1 < 10) {
    iVar1 = FUN_0030b6c4();
    if (iVar1 == 0) {
      return (int)*(char *)(DAT_0095386c + param_1 + 0x84);
    }
    if (param_1 * 0x50 != -0xa82c58) {
      return (int)*(char *)(param_1 * 0x50 + 0xa82ca6);
    }
  }
  return 0;
}
