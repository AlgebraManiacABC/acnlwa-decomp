/**
 * FUN_007458c8.c
 * Source line: 1101795
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_007458c8(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0x12);
  while( true ) {
    if ((char *)(param_1 + 0x1a) <= pcVar1) {
      return 1;
    }
    if (*pcVar1 != -1) break;
    pcVar1 = pcVar1 + 1;
  }
  return 0;
}
