/**
 * FUN_003619b0.c
 * Source line: 465963
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 * FUN_003619b0(int param_1)

{
  undefined4 *puVar1;
  
  if (pcRam0096b92c == NULL) {
    puVar1 = (undefined4 *)FUN_002f75a0((param_1 + 3U & 0xfffffffc) + 8);
  }
  else {
    puVar1 = (undefined4 *)(*pcRam0096b92c)();
  }
  *puVar1 = uRam0096b930;
  return puVar1 + 2;
}
