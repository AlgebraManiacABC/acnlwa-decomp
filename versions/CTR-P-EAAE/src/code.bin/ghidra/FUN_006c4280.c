/**
 * FUN_006c4280.c
 * Source line: 1023077
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_006c4280(int param_1)

{
  int iVar1;
  
  if (param_1 == -1) {
    return -1;
  }
  if (param_1 < 0x40) {
    iVar1 = FUN_006158c4();
    return (int)(char)*(undefined2 *)(iVar1 + param_1 * 0x14 + 0x14);
  }
  return 0;
}
