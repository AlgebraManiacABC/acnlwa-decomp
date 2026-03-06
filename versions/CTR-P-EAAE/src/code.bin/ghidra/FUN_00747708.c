/**
 * FUN_00747708.c
 * Source line: 1103478
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00747708(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[1] == '\0' || (char)param_1[1] == '\x02') {
    iVar1 = 0;
    do {
      if ((uint)((&DAT_0087c350)[iVar1] << 8) >> 0x10 == (uint)(*param_1 << 8) >> 0x10) {
        return 1;
      }
      iVar1 += 1;
    } while (iVar1 < 0x11);
  }
  return 0;
}
