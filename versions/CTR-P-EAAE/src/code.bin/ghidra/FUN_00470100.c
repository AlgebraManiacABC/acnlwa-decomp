/**
 * FUN_00470100.c
 * Source line: 641269
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00470100(int *param_1)

{
  undefined4 uVar1;
  
  if ((char)param_1[1] == '\0') {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(*param_1 + 0x69c) = 0;
    uVar1 = FUN_00470a68(*param_1);
    FUN_0047a580(param_1);
  }
  return uVar1;
}
