/**
 * FUN_00449270.c
 * Source line: 610806
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00449270(int param_1)

{
  if (*(char *)(param_1 + 0x81) != '\0') {
    FUN_00447ae8(param_1);
    FUN_00447fb4(param_1);
    FUN_0045fc64(uRam00974a74);
    FUN_004274d0(uRam0097d3b4);
    *(undefined1 *)(param_1 + 0x81) = 0;
  }
  return;
}
