/**
 * FUN_0011fb18.c
 * Source line: 122674
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0011fb18(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00135748(0xae0f38);
  if (iRam00974f38 == 0) {
    FUN_00129c7c();
    uVar1 = strlen(&UNK_008a24c0);
    iVar2 = FUN_00129da0(0x97d8c8,&UNK_008a24c0,uVar1,0);
    if (iVar2 < 0) {
      FUN_001357ec(0xae0f38);
      return iVar2;
    }
  }
  iRam00974f38 += 1;
  FUN_001357ec(0xae0f38);
  return 0;
}
