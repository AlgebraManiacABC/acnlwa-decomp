/**
 * FUN_00429194.c
 * Source line: 592805
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00429194(void)

{
  int iVar1;
  
  if (((uRam0097d3cc & 1) == 0) && (iVar1 = FUN_002fe7dc(0x97d3cc), iVar1 != 0)) {
    if (((uRam0097d3c8 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x97d3c8), iVar1 != 0)) {
      uRam0097d3d0 = 0x4174f;
      iRam0097d3d4 = 0;
    }
    uRam0097d3d8 = (undefined4)((ulonglong)uRam0097d3d0 * 1000);
    iRam0097d3dc = iRam0097d3d4 * 1000 + (int)((ulonglong)uRam0097d3d0 * 1000 >> 0x20);
  }
  return 0x97d3d8;
}
