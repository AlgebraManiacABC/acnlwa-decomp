/**
 * FUN_00344fd0.c
 * Source line: 442046
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00344fd0(void)

{
  int iVar1;
  uint in_r3;
  bool bVar2;
  uint local_10;
  
  local_10 = in_r3;
  FUN_00135748(0xadfa40);
  bVar2 = iRam00974aa8 == 0;
  FUN_001357ec(0xadfa40);
  if ((bVar2) && (iVar1 = FUN_00345144(), iVar1 == 0)) {
    return 0;
  }
  local_10 &= 0xffffff00;
  FUN_003453fc(0,&local_10);
  return (int)(char)local_10;
}
