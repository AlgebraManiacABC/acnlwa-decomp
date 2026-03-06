/**
 * FUN_0070ed68.c
 * Source line: 1066199
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0070ed68(undefined4 param_1,uint param_2,uint param_3)

{
  int extraout_r1;
  int iVar1;
  
  if (param_2 < 0x5b) {
    if (*(uint *)(&UNK_0083b4d4 + param_2 * 0x1c) <= param_3) {
      iVar1 = *(int *)(&UNK_0083b4d0 + param_2 * 0x1c);
      __aeabi_uidivmod(param_3 - iVar1,*(uint *)(&UNK_0083b4d4 + param_2 * 0x1c) - iVar1);
      param_3 = extraout_r1 + iVar1;
    }
  }
  return param_3;
}
