/**
 * FUN_00350f30.c
 * Source line: 452916
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00350f30(void)

{
  uint uVar1;
  
  puRam0097d890 = &UNK_00938078;
  uRam0097d894 = 0xc26c;
  uRam0097d878 = 0xff;
  uRam0097d87a = 0xff;
  uVar1 = FUN_0012f384();
  if ((uVar1 & 0x80000000) == 0) {
    uRam0097d877 = 1;
  }
  return;
}
