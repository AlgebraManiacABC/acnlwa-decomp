/**
 * FUN_00567224.c
 * Source line: 809055
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00567224(void)

{
  if (cRam00975c31 < '\x01') {
    uRam00975c44 = 0;
    if (((piRam00975c3c != NULL) && (iRam00ae55cc != 0)) && (cRam00975c30 == '\0')) {
      cRam00975c30 = 1;
          // WARNING: Could not recover jumptable at 0x00567280. Too many branches
          // WARNING: Treating indirect jump as call
      (**(code **)(*piRam00975c3c + 0xc))(piRam00975c3c,0x6c6f6164,0);
      return;
    }
  }
  return;
}
