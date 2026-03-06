/**
 * FUN_003df688.c
 * Source line: 554594
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_003df688(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&UNK_008c4c38 + param_2 * 8);
  iVar2 = *(int *)(&UNK_008c4c3c + param_2 * 8) + iVar1 + -1;
  if (iVar1 <= iVar2) {
    do {
      iVar1 = FUN_003dec70(param_1,*(undefined2 *)(&UNK_008c2400 + iVar2 * 4),
                           *(undefined2 *)(&UNK_008c2402 + iVar2 * 4));
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 += -1;
    } while (*(int *)(&UNK_008c4c38 + param_2 * 8) <= iVar2);
  }
  return 1;
}
