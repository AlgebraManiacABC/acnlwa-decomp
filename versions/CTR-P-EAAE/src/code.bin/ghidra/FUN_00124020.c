/**
 * FUN_00124020.c
 * Source line: 126003
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00124020(void)

{
  code *pcVar1;
  int iVar2;
  
  if (cRam0097d876 != '\0') {
    iVar2 = 0;
    do {
      pcVar1 = *(code **)(iVar2 * 4 + 0xae8390);
      if (pcVar1 != NULL) {
        (*pcVar1)();
      }
      iVar2 += 1;
    } while (iVar2 < 8);
    cRam0097d876 = '\0';
  }
  return;
}
