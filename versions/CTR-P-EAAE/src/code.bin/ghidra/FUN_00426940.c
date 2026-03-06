/**
 * FUN_00426940.c
 * Source line: 590462
 * Body lines: 6
 */
#include "../../../include/types.h"

int FUN_00426940(int param_1,undefined1 param_2,int param_3)

{
  *(undefined1 *)(param_1 + 0x78) = param_2;
  if (param_1 + 0x68 != param_3) {
    FUN_00426664(param_1 + 0x6c,param_3 + 4);
    *(undefined2 *)(param_1 + 0x74) = *(undefined2 *)(param_3 + 0xc);
  }
  return param_1 + 0x68;
}
