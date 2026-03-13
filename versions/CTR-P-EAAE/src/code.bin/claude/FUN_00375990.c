/**
 * FUN_00375990.c
 * Source line: 480698
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_00375990(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  FUN_003d0e94(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}
