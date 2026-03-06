/**
 * FUN_006d00e4.c
 * Source line: 1030764
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006d00e4(char *param_1,int param_2,int param_3,int param_4)

{
  if (*param_1 != '\0') {
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_004f2d48(*(int *)(param_1 + 0x3c),0,*(undefined1 *)(param_2 + 3),
                   *(undefined1 *)(param_2 + 2),*(undefined1 *)(param_2 + 1),0xffffffff);
      FUN_004f2a80(*(undefined4 *)(param_1 + 0x3c),*(undefined1 *)(param_3 + 3),
                   *(undefined1 *)(param_3 + 2),*(undefined1 *)(param_3 + 1),0xffffffff);
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_004f2d48(*(int *)(param_1 + 0x68),0,*(undefined1 *)(param_4 + 3),
                   *(undefined1 *)(param_4 + 2),*(undefined1 *)(param_4 + 1),0xffffffff);
    }
  }
  return;
}
