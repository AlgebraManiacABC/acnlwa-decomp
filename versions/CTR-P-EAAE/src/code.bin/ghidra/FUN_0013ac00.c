/**
 * FUN_0013ac00.c
 * Source line: 147581
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_0013ac00(int *param_1)

{
  (*pcRam0097e49c)(*param_1);
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffffffe;
  return;
}
