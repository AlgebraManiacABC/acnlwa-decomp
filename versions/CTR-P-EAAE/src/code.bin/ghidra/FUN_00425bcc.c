/**
 * FUN_00425bcc.c
 * Source line: 589565
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00425bcc(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x67452301;
  *(undefined4 *)(param_1 + 8) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0xc) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x10) = 0x10325476;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}
