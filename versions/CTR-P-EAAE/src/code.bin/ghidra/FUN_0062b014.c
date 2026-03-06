/**
 * FUN_0062b014.c
 * Source line: 943741
 * Body lines: 5
 */
#include "../../../include/types.h"

int FUN_0062b014(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00301d0c(param_1 + 0x800,FUN_0081e8d0,0x2c,4);
  *(undefined1 *)(iVar1 + 0xb0) = 4;
  iVar1 = FUN_00301d0c(iVar1 + 0xb1,&UNK_0062b008,1,4);
  return iVar1 + -0x8b1;
}
