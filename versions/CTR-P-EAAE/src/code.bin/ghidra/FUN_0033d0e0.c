/**
 * FUN_0033d0e0.c
 * Source line: 438151
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0033d0e0(int param_1)

{
  int iVar1;
  
  FUN_00132364(param_1 + 0x4c);
  iVar1 = 0;
  do {
    FUN_006b1a98(param_1 + iVar1 * 800 + 0x1234);
    iVar1 += 1;
  } while (iVar1 < 0xc);
  iVar1 = 0;
  do {
    FUN_006b1a98(param_1 + iVar1 * 800 + 0x294);
    iVar1 += 1;
  } while (iVar1 < 5);
  FUN_002a2ad0(param_1 + 0x37b4);
  return 2;
}
