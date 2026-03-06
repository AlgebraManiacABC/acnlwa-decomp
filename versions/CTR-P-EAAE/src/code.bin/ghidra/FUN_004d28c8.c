/**
 * FUN_004d28c8.c
 * Source line: 715879
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004d28c8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 2;
    iVar2 += 2;
    *(undefined2 *)(iVar1 + 0xaefac8) = 0xffff;
    *(undefined2 *)(iVar1 + 0xaefaca) = 0xffff;
  } while (iVar2 < 0x10);
  return;
}
