/**
 * FUN_00158924.c
 * Source line: 171437
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00158924(undefined4 *param_1)

{
  int iVar1;
  
  FUN_00163928();
  iVar1 = FUN_0015d184(0xae5720,0xae574c,0xae573c);
  if (iVar1 == 0) {
    FUN_00163928();
    if (iRam00975c88 != 0) {
      FUN_00160dc8();
      iRam00975c88 = 0;
    }
    return 0;
  }
  if (param_1 != NULL) {
    *param_1 = uRam00ae573c;
  }
  return 1;
}
