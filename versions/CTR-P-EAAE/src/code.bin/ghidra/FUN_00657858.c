/**
 * FUN_00657858.c
 * Source line: 966001
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_00657858(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 0x1a9) < 0xeb) {
    iVar1 = FUN_0064f390();
  }
  else {
    iVar1 = 0;
  }
  bVar2 = (*(byte *)(iVar1 + 8) & 1) == 0;
  if (bVar2) {
    FUN_001abbbc(param_1 + 0x14);
    FUN_001d1cd0(param_1 + 0x1b4);
  }
  return bVar2;
}
