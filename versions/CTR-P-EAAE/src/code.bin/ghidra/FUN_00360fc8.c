/**
 * FUN_00360fc8.c
 * Source line: 465581
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00360fc8(int param_1)

{
  int iVar1;
  
  FUN_00360d24(param_1,0x20);
  if ((*(char *)(param_1 + 0x210) != '\0') && (*(char *)(param_1 + 0x211) != '\0')) {
    FUN_00101830(*(undefined4 *)(param_1 + 0xc),&UNK_0089a878);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  iVar1 = FUN_00100f68(*(undefined4 *)(param_1 + 0xc),0x20);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1 * 2;
  return param_1;
}
