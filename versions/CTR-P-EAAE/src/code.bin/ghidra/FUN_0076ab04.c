/**
 * FUN_0076ab04.c
 * Source line: 1128185
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_0076ab04(void)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = (char *)FUN_00535a1c();
  uVar2 = 0;
  if (pcVar1 != NULL) {
    uVar2 = (uint)*pcVar1;
    if (0xfe < uVar2) {
      uVar2 = 0;
    }
    uVar2 &= 0xff;
  }
  return uVar2;
}
