/**
 * FUN_006267dc.c
 * Source line: 940326
 * Body lines: 5
 */
#include "../../../include/types.h"

bool FUN_006267dc(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(DAT_0095362c + 0x234);
  bVar2 = FUN_00624c78(*(undefined1 *)(DAT_0095362c + 0x13268));
  return (bVar2 & bVar1) != 0;
}
