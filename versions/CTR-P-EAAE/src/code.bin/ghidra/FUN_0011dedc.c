/**
 * FUN_0011dedc.c
 * Source line: 121079
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_0011dedc(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (iRam0097e004 == 0) {
    uVar1 = strlen(&UNK_00932928);
    iVar2 = FUN_00129da0(0x97e004,&UNK_00932928,uVar1,0);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  return 0;
}
