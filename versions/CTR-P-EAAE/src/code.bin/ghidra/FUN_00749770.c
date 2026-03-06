/**
 * FUN_00749770.c
 * Source line: 1104953
 * Body lines: 10
 */
#include "../../../include/types.h"

int * FUN_00749770(int *param_1)

{
  if ((char)param_1[1] != '\0') {
    (**(code **)(*param_1 + 0x14))(param_1,param_1 + 2);
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 1;
  }
  if (*(char *)((int)param_1 + 5) != '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,param_1 + 0x12,param_1 + 2,(char)param_1[0x22]);
    *(undefined1 *)((int)param_1 + 5) = 0;
  }
  return param_1 + 0x12;
}
