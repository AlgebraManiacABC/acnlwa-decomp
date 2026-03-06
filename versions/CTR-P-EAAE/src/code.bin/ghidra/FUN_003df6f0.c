/**
 * FUN_003df6f0.c
 * Source line: 554617
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_003df6f0(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    iVar1 = uVar3 * 8;
    if (((*(int *)(&UNK_008c5058 + iVar1) != 0) && (*(uint *)(&UNK_008c505c + iVar1) <= param_2)) &&
       (iVar2 = FUN_00101868(param_1), iVar2 == 0)) break;
    uVar3 += 1;
    if (0x83 < (int)uVar3) {
      return 0x85;
    }
  }
  *param_3 = *(undefined4 *)(&UNK_008c505c + iVar1);
  return uVar3 & 0xff;
}
