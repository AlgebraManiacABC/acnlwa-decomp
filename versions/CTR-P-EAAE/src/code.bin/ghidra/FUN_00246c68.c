/**
 * FUN_00246c68.c
 * Source line: 297148
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 * FUN_00246c68(undefined4 *param_1)

{
  *param_1 = &UNK_008ee798;
  if (*(char *)(param_1 + 0xd) != '\0') {
    if ((param_1[0x11] != -1) && (iRam0094d540 != 0)) {
      FUN_00246f34();
    }
    FUN_0020aedc(param_1);
  }
  return param_1;
}
