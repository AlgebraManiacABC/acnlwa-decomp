/**
 * FUN_00400cf4.c
 * Source line: 570474
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00400cf4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00453b04();
  *puVar1 = &UNK_008ff2b8;
  iVar2 = FUN_00450d54(puVar1 + 0x17);
  iVar2 = FUN_0045b1d4(iVar2 + 0x28);
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  iVar2 = FUN_00426354(iVar2 + 0x5c);
  *(undefined4 *)(iVar2 + -0xa8) = 0x8000;
  *(undefined4 *)(iVar2 + -0xa4) = 0;
  return;
}
