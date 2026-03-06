/**
 * FUN_004d60b0.c
 * Source line: 718718
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004d60b0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + (uint)(cVar1 == '\x01') * 4 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + (uint)(cVar1 == '\x02') * 4 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + (uint)(cVar1 != '\0') * 4 + 0x18);
  return;
}
