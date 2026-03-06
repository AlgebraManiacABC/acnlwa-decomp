/**
 * FUN_0058cb84.c
 * Source line: 836823
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0058cb84(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = iRam0094d090;
  if (*(char *)(iRam0094d090 + 0x34) != '\x05') {
    *(undefined4 *)(iRam0094d090 + 0x614) = param_1;
    *(undefined4 *)(iVar1 + 0x618) = param_2;
  }
  return;
}
