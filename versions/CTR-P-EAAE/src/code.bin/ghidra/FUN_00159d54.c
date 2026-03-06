/**
 * FUN_00159d54.c
 * Source line: 172528
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_00159d54(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(short *)(param_1 + 10) != 0) {
    do {
      iVar1 = FUN_00159e10(*(int *)(param_1 + 0xc) + iVar2 * 0x10 + 4,param_2,4);
      if (iVar1 != 0) {
        return *(int *)(param_1 + 0xc) + iVar2 * 0x10;
      }
      iVar2 += 1;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 10));
  }
  return 0;
}
