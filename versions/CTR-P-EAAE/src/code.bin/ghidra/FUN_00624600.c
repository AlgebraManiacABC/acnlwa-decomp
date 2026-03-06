/**
 * FUN_00624600.c
 * Source line: 937881
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00624600(char *param_1)

{
  if (*param_1 == '\x05') {
    *param_1 = '\a';
  }
  else if (*param_1 == '\x06') {
    *(undefined1 *)(DAT_0095362c + 0x54) = 1;
    *param_1 = '\t';
  }
  return;
}
