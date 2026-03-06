/**
 * FUN_00482198.c
 * Source line: 654559
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00482198(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x67452301;
  *(undefined4 *)(param_1 + 8) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0xc) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x10) = 0x10325476;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}
